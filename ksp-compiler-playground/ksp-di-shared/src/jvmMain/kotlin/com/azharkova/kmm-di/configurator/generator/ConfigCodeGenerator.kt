package kmm_di.configurator.generator

import appendText
import com.azharkova.kmm.configurator.ConfiguratorContainerMetaData
import java.io.OutputStream


fun OutputStream.generateClassDeclarationDefinition(def: ConfiguratorContainerMetaData.Definition.ClassDeclarationDefinition) {
    val param =
        if (def.constructorParameters.filter { it.type == ConfiguratorContainerMetaData.ConstructorParameterType.PARAMETER_INJECT }
                .isEmpty()) "" else " params ->"
    val ctor = if (def.constructorParameters.isEmpty()) "" else generateConstructor(def.constructorParameters)
    appendText("\nprint(\"initialize ${def.className}\")")
    appendText("\nval ${def.keyword.lowercase()} = ${def.packageName}.${def.className}($ctor)")
   def.bindings.forEach {
        appendText("${def.keyword.lowercase()}.${it.simpleName} = ${it.qualifiedName}()")
    }

  //  appendText("\naddToScope(${def.keyword}, $param${def.packageName}.${def.className}::class){${def.packageName}.${def.className}($ctor)}")
}

fun generateClassModule(classFile: OutputStream, module: ConfiguratorContainerMetaData.Container) {
    classFile.appendText(
        """
            package com.azharkova.kmm_di.ksp.generated
            import com.azharkova.di.container.*
            import com.azharkova.kmmdi.shared.*
            import com.azharkova.kmmdi.shared.base.*
            import com.azharkova.kmmdi.shared.factory.*

        """.trimIndent()
    )

    val defs = module.definitions.filterIsInstance<ConfiguratorContainerMetaData.Definition.ClassDeclarationDefinition>()
    val packageNames =  defs.map{it.packageName}.distinct()
    packageNames.forEach {
        classFile.appendText("\nimport ${it}.*")
    }

    val generatedClass = "\n\n\nclass ${module.name}: IConfigurator {"
    classFile.appendText(generatedClass+"\n")
    val generatedField = "${module.name}ConfigContainer"
    val classModule = "${module.packageName}.${module.name}"
    classFile.appendText("\noverride fun create(view: IView): IInteractor? {\n")

    defs.forEach { def ->
        classFile.generateClassDeclarationDefinition(def)
    }
    classFile.appendText("\n " +
            "}" + "\n" +
            "}"
            )
    classFile.flush()
    classFile.close()
}

fun generateConstructor(constructorParameters: List<ConfiguratorContainerMetaData.ConstructorParameter>): String {
    return constructorParameters.joinToString(prefix = "", separator = ",", postfix = "") {
        if (it.type == ConfiguratorContainerMetaData.ConstructorParameterType.DEPENDENCY) "resolve(${it.name}::class) as? ${it.name}" else "params.get()"
    }
}