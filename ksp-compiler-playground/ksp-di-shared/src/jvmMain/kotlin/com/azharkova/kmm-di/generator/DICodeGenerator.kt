package kmm_di.generator

import appendText
import com.google.devtools.ksp.symbol.KSDeclaration
import kmm_di.metadata.DIMetaData
import java.io.OutputStream
import java.util.*

val DEFAULT_MODULE_HEADER = """
        package com.azharkova.kmm_di.ksp.generated
    import com.azharkova.di.scope.ScopeType
    import com.azharkova.kmmdi.shared.di.DIManager
    import com.azharkova.di.container.*
    class ConfigApp {
         val appContainer: DIManager =
        DIManager()

    init {
        setup()
    }

    fun setup() {
    """.trimIndent()

val DEFAULT_MODULE_FOOTER = """
       }}
    """.trimIndent()


fun OutputStream.generateClassDeclarationDefinition(def: DIMetaData.Definition.ClassDeclarationDefinition) {
    val param =
        if (def.constructorParameters.filter { it.type == DIMetaData.ConstructorParameterType.PARAMETER_INJECT }
                .isEmpty()) "" else " params ->"
    val ctor = if (def.constructorParameters.isEmpty()) "" else generateConstructor(def.constructorParameters)
    appendText("\nprint(\"initialize ${def.className}\")")
    appendText("\naddToScope(${def.keyword}, $param${def.packageName}.${def.className}::class){${def.packageName}.${def.className}($ctor)}")
}

fun generateClassModule(classFile: OutputStream, module: DIMetaData.Container) {
    classFile.appendText(
        """
            package com.azharkova.kmm_di.ksp.generated
            import com.azharkova.di.container.*
            import kotlin.native.concurrent.ThreadLocal
            import com.azharkova.kmmdi.shared.*
            import com.azharkova.di.scope.*
            import com.azharkova.kmmdi.shared.di.DIManager
        """.trimIndent()
    )

    val generatedClass = "\n\n\nclass ${module.name}Container : BaseDIComponent() {"
classFile.appendText(generatedClass+"\n")
    val generatedField = "${module.name}ConfigContainer"
    val classModule = "${module.packageName}.${module.name}"
    classFile.appendText("\noverride fun setup() {\n")

    module.definitions.filterIsInstance<DIMetaData.Definition.ClassDeclarationDefinition>().forEach { def ->
        classFile.generateClassDeclarationDefinition(def)
    }
    classFile.appendText("\n " +
            "}" + "\n" +
            "" +
            "\n@ThreadLocal\ncompanion object {\n" +
            "  \n" + "val newInstance = ${module.name}Container()" +
            " \n}\n}")
    classFile.flush()
    classFile.close()
}

fun generateConstructor(constructorParameters: List<DIMetaData.ConstructorParameter>): String {
    return constructorParameters.joinToString(prefix = "", separator = ",", postfix = "") {
        if (it.type == DIMetaData.ConstructorParameterType.DEPENDENCY) "resolve(${it.name}::class) as? ${it.name}" else "params.get()"
    }
}