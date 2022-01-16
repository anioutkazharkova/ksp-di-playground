package com.azharkova.kmm

import com.azharkova.kmm.configurator.ConfiguratorContainerMetaData
import com.azharkova.ksp_annotation.Configurator
import com.google.devtools.ksp.processing.KSPLogger
import com.google.devtools.ksp.processing.Resolver
import com.google.devtools.ksp.symbol.KSAnnotated
import com.google.devtools.ksp.symbol.KSClassDeclaration
import com.google.devtools.ksp.validate
import kmm_di.metadata.DIContainerMetaData
import kotlin.reflect.KClass

class ConfigMetaDataScanner (
    val logger: KSPLogger
) {

    lateinit var moduleMap: Map<String, ConfiguratorContainerMetaData.Container>
    private val moduleMetadataScanner = ConfiguratorScanner(logger)
    private val componentMetadataScanner = ConfigComponentScanner(logger)

    fun scanAllMetaData(
        resolver: Resolver,
        defaultModule: ConfiguratorContainerMetaData.Container
    ): Pair<Map<String, ConfiguratorContainerMetaData.Container>, List<ConfiguratorContainerMetaData.Definition>> {
        val modules = scanClassModules(resolver, defaultModule).toSortedMap()
        logger.warn("modules ${modules}")
        val components = scanComponents(resolver, defaultModule)
        logger.warn("components ${components}")
        return Pair(
            modules,components

        )
    }

    private fun scanClassModules(
        resolver: Resolver,
        defaultModule: ConfiguratorContainerMetaData.Container
    ): Map<String, ConfiguratorContainerMetaData.Container> {

        logger.warn("scan modules ...")
        // class modules
        val classes = resolver.getSymbolsWithAnnotation(Configurator::class.qualifiedName!!)
        logger.warn("container ${classes} ${classes.count()}")
        moduleMap = resolver.getSymbolsWithAnnotation(Configurator::class.qualifiedName!!)
            .filter { it is KSClassDeclaration && it.validate() }
            .map { moduleMetadataScanner.createClassModule(it) }
            .toMap()

        return moduleMap
    }

    private fun scanComponents(
        resolver: Resolver,
        defaultModule: ConfiguratorContainerMetaData.Container
    ): List<ConfiguratorContainerMetaData.Definition> {
        // component scan
        logger.warn("scan definitions ...")

        val definitions = CONFIG_ANNOTATION_LIST.flatMap { a -> resolver.scanDefinition(a) { d ->

            componentMetadataScanner.createDefinition(d) } }
        logger.warn("get definitions ... ${definitions}")
        definitions.forEach { addToModule(it, defaultModule) }
        return definitions
    }

    private fun Resolver.scanDefinition(
        annotationClass: KClass<*>,
        mapDefinition: (KSAnnotated) -> ConfiguratorContainerMetaData.Definition
    ): List<ConfiguratorContainerMetaData.Definition> {
        logger.warn("annotation name: ${annotationClass.qualifiedName}")


        return getSymbolsWithAnnotation(annotationClass.qualifiedName!!)
            .filter {
                it is KSClassDeclaration
            }
            .map { mapDefinition(it) }
            .toList()
    }

    private fun addToModule(definition: ConfiguratorContainerMetaData.Definition, defaultModule: ConfiguratorContainerMetaData.Container) {
        val definitionPackage = definition.packageName
        logger.warn("module package ${definitionPackage}")
        val foundModule = moduleMap.values.firstOrNull { it.acceptDefinition(definitionPackage) }
        val module = foundModule ?: defaultModule
        logger.warn("addToModule - definition(class) -> $definition -> module $module")
        module.definitions.add(definition)
    }
}

typealias ContainerIndex = Pair<String, ConfiguratorContainerMetaData.Container>