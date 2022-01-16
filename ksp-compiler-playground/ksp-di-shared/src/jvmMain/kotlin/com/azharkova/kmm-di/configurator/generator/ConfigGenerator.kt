package kmm_di.configurator.generator

import appendText
import com.azharkova.kmm.configurator.ConfiguratorContainerMetaData
import com.google.devtools.ksp.processing.CodeGenerator
import com.google.devtools.ksp.processing.Dependencies
import com.google.devtools.ksp.processing.KSPLogger
import java.io.OutputStream

class ConfigCodeGenerator(
    val codeGenerator: CodeGenerator,
    val logger: KSPLogger
) {

    fun generateModules(
        moduleMap: Map<String, ConfiguratorContainerMetaData.Container>,
        defaultModule: ConfiguratorContainerMetaData.Container
    ) {
        logger.warn("generate ${moduleMap.size} modules ...")
        moduleMap.values.forEachIndexed { index, module ->
            generateModule(module)
        }
    }

    private fun generateModule(module: ConfiguratorContainerMetaData.Container) {
        logger.warn("generate $module - ${module.type}")
        codeGenerator.getDefaultFile().let { defaultFile ->
            if (module.definitions.isNotEmpty()) {
                when (module.type) {
                    ConfiguratorContainerMetaData.ElementType.FIELD -> defaultFile.generateFieldModule(module)
                    ConfiguratorContainerMetaData.ElementType.CLASS -> {
                        val moduleFile = codeGenerator.getFile(fileName = "${module.name}Gen")
                        generateClassModule(moduleFile, module)
                    }
                }
            } else {

                if (module.name != "defaultModule") {
                    val moduleFile = codeGenerator.getFile(fileName = "${module.name}Gen")
                    generateClassModule(moduleFile, module)
                }
                logger.warn("no definition for $module")
            }
        }
    }

    fun generateDefaultDefinitions(
        definitions: List<ConfiguratorContainerMetaData.Definition>
    ) {
        logger.warn("generate default module")
        definitions.forEachIndexed { index, def ->
            logger.warn("generate $def")
            if (def is ConfiguratorContainerMetaData.Definition.ClassDeclarationDefinition) {
                codeGenerator.getDefaultFile().generateClassDeclarationDefinition(def)
            }
        }
    }

    private fun OutputStream.generateFieldModule(module: ConfiguratorContainerMetaData.Container) {
        module.definitions.filterIsInstance<ConfiguratorContainerMetaData.Definition.ClassDeclarationDefinition>().forEach { def ->
            logger.warn("generate $def")
            generateClassDeclarationDefinition(def)
        }
    }
}

fun CodeGenerator.getDefaultFile() = createNewFile(
    Dependencies.ALL_FILES,
    "com.azharkova.kmm_di.ksp.generated",
    "DefaultDIConfig"
)

fun CodeGenerator.getFile(packageName: String = "com.azharkova.kmm_di.ksp.generated", fileName: String) = createNewFile(
    Dependencies.ALL_FILES,
    packageName,
    fileName)
