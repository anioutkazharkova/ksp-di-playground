package kmm_di.generator


import appendText
import com.google.devtools.ksp.processing.CodeGenerator
import com.google.devtools.ksp.processing.Dependencies
import com.google.devtools.ksp.processing.KSPLogger
import kmm_di.generator.DEFAULT_MODULE_FOOTER
import kmm_di.generator.DEFAULT_MODULE_HEADER
import kmm_di.generator.generateClassDeclarationDefinition
import kmm_di.generator.generateClassModule
import kmm_di.metadata.DIMetaData
import java.io.OutputStream

class DICodeGenerator(
    val codeGenerator: CodeGenerator,
    val logger: KSPLogger
) {

    fun generateModules(
        moduleMap: Map<String, DIMetaData.Container>,
        defaultModule: DIMetaData.Container
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

    private fun generateModule(module: DIMetaData.Container) {
        logger.warn("generate $module - ${module.type}")
        codeGenerator.getDefaultFile().let { defaultFile ->
            if (module.definitions.isNotEmpty()) {
                when (module.type) {
                    DIMetaData.ElementType.FIELD -> defaultFile.generateFieldModule(module)
                    DIMetaData.ElementType.CLASS -> {
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
        definitions: List<DIMetaData.Definition>
    ) {
        logger.warn("generate default module")
        definitions.forEachIndexed { index, def ->
            if (index == 0) {
                codeGenerator.getDefaultFile().apply {
                    appendText(DEFAULT_MODULE_HEADER)
                }
            }
            logger.warn("generate $def")
            if (def is DIMetaData.Definition.ClassDeclarationDefinition) {
                codeGenerator.getDefaultFile().generateClassDeclarationDefinition(def)
            }
            if (index == definitions.size - 1) {
                codeGenerator.getDefaultFile().apply {
                    appendText(DEFAULT_MODULE_FOOTER)
                }
            }
        }
    }

    private fun OutputStream.generateFieldModule(module: DIMetaData.Container) {
        module.definitions.filterIsInstance<DIMetaData.Definition.ClassDeclarationDefinition>().forEach { def ->
            logger.warn("generate $def")
            generateClassDeclarationDefinition(def)
        }
    }
}

fun CodeGenerator.getDefaultFile() = createNewFile(
    Dependencies.ALL_FILES,
    "com.azharkova.kmm_di.ksp.generated",
    "DefaultDI"
)

fun CodeGenerator.getFile(packageName: String = "com.azharkova.kmm_di.ksp.generated", fileName: String) = createNewFile(
    Dependencies.ALL_FILES,
    packageName,
    fileName)


