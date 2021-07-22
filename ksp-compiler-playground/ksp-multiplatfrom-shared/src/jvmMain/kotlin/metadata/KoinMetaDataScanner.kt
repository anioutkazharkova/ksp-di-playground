package metadata

import com.google.devtools.ksp.processing.KSPLogger
import com.google.devtools.ksp.processing.Resolver
import com.google.devtools.ksp.symbol.KSAnnotated
import com.google.devtools.ksp.symbol.KSClassDeclaration
import com.google.devtools.ksp.validate
import org.koin.core.annotation.Module
import kotlin.reflect.KClass

class KoinMetaDataScanner(
    val logger: KSPLogger
) {

    lateinit var moduleMap: Map<String, KoinMetaData.Module>
    private val moduleMetadataScanner = ModuleScanner(logger)
    private val componentMetadataScanner = ComponentScanner(logger)

    fun scanAllMetaData(
        resolver: Resolver,
        defaultModule: KoinMetaData.Module
    ): Pair<Map<String, KoinMetaData.Module>, List<KoinMetaData.Definition>> {
        return Pair(
            scanClassModules(resolver, defaultModule).toSortedMap(),
            scanComponents(resolver, defaultModule)
        )
    }

    private fun scanClassModules(
        resolver: Resolver,
        defaultModule: KoinMetaData.Module
    ): Map<String, KoinMetaData.Module> {

        logger.warn("scan modules ...")
        // class modules
        moduleMap = resolver.getSymbolsWithAnnotation(Module::class.qualifiedName!!)
            .filter { it is KSClassDeclaration && it.validate() }
            .map { moduleMetadataScanner.createClassModule(it) }
            .toMap()

        return moduleMap
    }

    private fun scanComponents(
        resolver: Resolver,
        defaultModule: KoinMetaData.Module
    ): List<KoinMetaData.Definition> {
        // component scan
        logger.warn("scan definitions ...")

        val definitions = DEFINITION_ANNOTATION_LIST.flatMap { a -> resolver.scanDefinition(a) { d -> componentMetadataScanner.createDefinition(d) } }

        definitions.forEach { addToModule(it, defaultModule) }
        return definitions
    }

    private fun Resolver.scanDefinition(
        annotationClass: KClass<*>,
        mapDefinition: (KSAnnotated) -> KoinMetaData.Definition
    ): List<KoinMetaData.Definition> {
        return getSymbolsWithAnnotation(annotationClass.qualifiedName!!)
            .filter { it is KSClassDeclaration && it.validate() }
            .mapNotNull { mapDefinition(it) }
            .toList()
    }

    private fun addToModule(definition: KoinMetaData.Definition, defaultModule: KoinMetaData.Module) {
        val definitionPackage = definition.packageName
        val foundModule = moduleMap.values.firstOrNull { it.acceptDefinition(definitionPackage) }
        val module = foundModule ?: defaultModule
        logger.warn("addToModule - definition(class) -> $definition -> module $module")
        module.definitions.add(definition)
    }
}

typealias ModuleIndex = Pair<String, KoinMetaData.Module>