package generator

import DEFAULT_MODULE_FOOTER
import DEFAULT_MODULE_HEADER
import appendText
import com.google.devtools.ksp.processing.CodeGenerator
import com.google.devtools.ksp.processing.Dependencies
import com.google.devtools.ksp.processing.KSPLogger
import generateClassDeclarationDefinition
import generateClassModule
import metadata.KoinMetaData
import java.io.OutputStream

class KoinCodeGenerator(
    val codeGenerator: CodeGenerator,
    val logger: KSPLogger
) {

    fun generateModules(
        moduleMap: Map<String, KoinMetaData.Module>,
        defaultModule: KoinMetaData.Module
    ) {
        logger.warn("generate ${moduleMap.size} modules ...")
        moduleMap.values.forEachIndexed { index, module ->
            if (index == 0) {
                val file = codeGenerator.getDefaultFile()
                file.appendText(DEFAULT_MODULE_HEADER)
            }
            generateModule(module)
            if (index == moduleMap.values.size - 1) {
                generateModule(defaultModule)
                val file = codeGenerator.getDefaultFile()
                file.appendText("\n" + DEFAULT_MODULE_FOOTER)
            }
        }
    }

    private fun generateModule(module: KoinMetaData.Module) {
        logger.warn("generate $module - ${module.type}")
        codeGenerator.getDefaultFile().let { defaultFile ->
            if (module.definitions.isNotEmpty()) {
                when (module.type) {
                    KoinMetaData.ModuleType.FIELD -> defaultFile.generateFieldModule(module)
                    KoinMetaData.ModuleType.CLASS -> {
                        val moduleFile = codeGenerator.getFile(fileName = "${module.name}Gen")
                        generateClassModule(moduleFile, module)
                    }
                }
            } else {
                logger.warn("no definition for $module")
            }
        }
    }

    fun generateDefaultDefinitions(
        definitions: List<KoinMetaData.Definition>
    ) {
        logger.warn("generate default module")
        definitions.forEachIndexed { index, def ->
            if (index == 0) {
                codeGenerator.getDefaultFile().apply {
                    appendText(DEFAULT_MODULE_HEADER)
                }
            }
            logger.warn("generate $def")
            if (def is KoinMetaData.Definition.ClassDeclarationDefinition) {
                codeGenerator.getDefaultFile().generateClassDeclarationDefinition(def)
            }
            if (index == definitions.size - 1) {
                codeGenerator.getDefaultFile().apply {
                    appendText(DEFAULT_MODULE_FOOTER)
                }
            }
        }
    }

    private fun OutputStream.generateFieldModule(module: KoinMetaData.Module) {
        module.definitions.filterIsInstance<KoinMetaData.Definition.ClassDeclarationDefinition>().forEach { def ->
            logger.warn("generate $def")
            generateClassDeclarationDefinition(def)
        }
    }
}

fun CodeGenerator.getDefaultFile() = createNewFile(
    Dependencies.ALL_FILES,
    "org.koin.ksp.generated",
    "Default"
)

fun CodeGenerator.getFile(packageName: String = "org.koin.ksp.generated", fileName: String) = createNewFile(
    Dependencies.ALL_FILES,
    packageName,
    fileName
)