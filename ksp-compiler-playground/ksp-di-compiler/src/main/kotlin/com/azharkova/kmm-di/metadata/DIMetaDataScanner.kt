package kmm_di.metadata

import com.azharkova.ksp_annotation.Container
import com.google.devtools.ksp.processing.KSPLogger
import com.google.devtools.ksp.processing.Resolver
import com.google.devtools.ksp.symbol.KSAnnotated
import com.google.devtools.ksp.symbol.KSClassDeclaration
import com.google.devtools.ksp.validate
import kotlin.reflect.KClass

class DIMetaDataScanner (
    val logger: KSPLogger
) {

    lateinit var moduleMap: Map<String, DIMetaData.Container>
    private val moduleMetadataScanner = ContainerScanner(logger)
    private val componentMetadataScanner = DIComponentScanner(logger)

    fun scanAllMetaData(
        resolver: Resolver,
        defaultModule: DIMetaData.Container
    ): Pair<Map<String, DIMetaData.Container>, List<DIMetaData.Definition>> {
        return Pair(
            scanContainerModules(resolver, defaultModule).toSortedMap(),
            scanComponents(resolver, defaultModule)
        )
    }

    private fun scanContainerModules(
        resolver: Resolver,
        defaultModule: DIMetaData.Container
    ): Map<String, DIMetaData.Container> {

        logger.warn("scan modules ...")
        // class modules
        moduleMap = resolver.getSymbolsWithAnnotation(Container::class.qualifiedName!!)
            .filter { it is KSClassDeclaration && it.validate() }
            .map { moduleMetadataScanner.createClassModule(it) }
            .toMap()

        return moduleMap
    }

    private fun scanComponents(
        resolver: Resolver,
        defaultModule: DIMetaData.Container
    ): List<DIMetaData.Definition> {
        // component scan
        logger.warn("scan definitions ...")

        val definitions = DEFINITION_ANNOTATION_LIST.flatMap { a -> resolver.scanDefinition(a) { d ->
            logger.warn("defding ${d}")
            componentMetadataScanner.createDefinition(d) } }

        definitions.forEach { addToModule(it, defaultModule) }
        return definitions
    }

    private fun Resolver.scanDefinition(
        annotationClass: KClass<*>,
        mapDefinition: (KSAnnotated) -> DIMetaData.Definition
    ): List<DIMetaData.Definition> {
        return getSymbolsWithAnnotation(annotationClass.qualifiedName!!)
            .filter { it is KSClassDeclaration && it.validate() }
            .mapNotNull { mapDefinition(it) }
            .toList()
    }

    private fun addToModule(definition: DIMetaData.Definition, defaultModule: DIMetaData.Container) {
        val definitionPackage = definition.packageName
        val foundModule = moduleMap.values.firstOrNull { it.acceptDefinition(definitionPackage) }
        val module = foundModule ?: defaultModule
        logger.warn("addToModule - definition(class) -> $definition -> module $module")
        module.definitions.add(definition)
    }
}

    typealias ContainerIndex = Pair<String, DIMetaData.Container>