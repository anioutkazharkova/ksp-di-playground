

import com.azharkova.kmm.ConfigMetaDataScanner
import com.azharkova.kmm.configurator.ConfiguratorContainerMetaData
import com.google.devtools.ksp.processing.*
import com.google.devtools.ksp.symbol.KSAnnotated
import kmm_di.configurator.generator.ConfigCodeGenerator
import kmm_di.generator.DICodeGenerator
import kmm_di.metadata.DIContainerMetaData
import kmm_di.metadata.DIMetaDataScanner


class ConfigBuilderProcessor(
    val codeGenerator: CodeGenerator,
    val logger: KSPLogger
) : SymbolProcessor {

    val diCodeGenerator = ConfigCodeGenerator(codeGenerator, logger)
    val metaDataScanner = ConfigMetaDataScanner(logger)


    override fun process(resolver: Resolver): List<KSAnnotated> {
        val defaultModule = ConfiguratorContainerMetaData.Container(
            packageName = "",
            name = "defaultModule"
        )
        logger.warn("Scan metadata ...")
        val (moduleMap, definitions) = metaDataScanner.scanAllMetaData(resolver, defaultModule)
        logger.warn("Code generation ...")
        if (moduleMap.isNotEmpty()) {
            logger.warn("Generate from modules metadata ...")
            diCodeGenerator.generateModules(moduleMap, defaultModule)
        } else {
            logger.warn("Generate default di module ...")
            diCodeGenerator.generateDefaultDefinitions(definitions)
        }
        return emptyList()
    }
}

class ConfigBuilderProcessorProvider : SymbolProcessorProvider {
    override fun create(
        environment: SymbolProcessorEnvironment
    ): SymbolProcessor {
        return ConfigBuilderProcessor(environment.codeGenerator, environment.logger)
    }
}