

import com.google.devtools.ksp.processing.*
import com.google.devtools.ksp.symbol.KSAnnotated
import kmm_di.generator.DICodeGenerator
import kmm_di.metadata.DIMetaData
import kmm_di.metadata.DIMetaDataScanner

class DIBuilderProcessor(
    val codeGenerator: CodeGenerator,
    val logger: KSPLogger
) : SymbolProcessor {

    val diCodeGenerator = DICodeGenerator(codeGenerator, logger)
    val metaDataScanner = DIMetaDataScanner(logger)


    override fun process(resolver: Resolver): List<KSAnnotated> {
        val defaultModule = DIMetaData.Container(
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

class DIBuilderProcessorProvider : SymbolProcessorProvider {
    override fun create(
        environment: SymbolProcessorEnvironment
    ): SymbolProcessor {
        return DIBuilderProcessor(environment.codeGenerator, environment.logger)
    }
}