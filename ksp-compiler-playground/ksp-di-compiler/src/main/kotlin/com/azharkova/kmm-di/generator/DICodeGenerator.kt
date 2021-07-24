package kmm_di.generator

import appendText
import com.google.devtools.ksp.symbol.KSDeclaration
import kmm_di.metadata.DIMetaData
import java.io.OutputStream
import java.util.*

val DEFAULT_MODULE_HEADER = """
        package com.azharkova.kmm_di.ksp.generated
    
        import org.koin.core.KoinApplication
        import org.koin.core.module.Module
        import org.koin.dsl.module
        import org.koin.dsl.bind
        import org.koin.dsl.binds
        
        fun KoinApplication.defaultModule() = modules(defaultModule)
        val defaultModule = module {
    """.trimIndent()

val DEFAULT_MODULE_FOOTER = """
        }
    """.trimIndent()

fun OutputStream.generateFunctionDeclarationDefinition(def: DIMetaData.Definition.FunctionDeclarationDefinition) {
    val ctor = generateConstructor(def.parameters)
    val binds = generateBindings(def.bindings)
    appendText("\n\t\t\t\t${def.keyword} { moduleInstance.${def.functionName}$ctor } $binds")
}


fun OutputStream.generateClassDeclarationDefinition(def: DIMetaData.Definition.ClassDeclarationDefinition) {
    val param =
        if (def.constructorParameters.filter { it.type == DIMetaData.ConstructorParameterType.PARAMETER_INJECT }
                .isEmpty()) "" else " params ->"
    val ctor = generateConstructor(def.constructorParameters)
    val binds = generateBindings(def.bindings)
    appendText("\n\t\t\t\t${def.keyword} { $param${def.packageName}.${def.className}$ctor } $binds")
}

fun generateClassModule(classFile: OutputStream, module: DIMetaData.Container) {
    classFile.appendText(
        """
            package com.azharkova.kmm_di.ksp.generated
            import com.azharkova.kmmdi.shared.*
        """.trimIndent()
    )
    val generatedField = "${module.name}Config"
    val classModule = "${module.packageName}.${module.name}"
    classFile.appendText("val appContainer: DIManager =\n" +
            "        DIManager()")
    classFile.appendText("\nval $generatedField = module {")
    classFile.appendText("\n\t\t\t\tval moduleInstance = $classModule()")
    // Definitions here
    module.definitions.filterIsInstance<DIMetaData.Definition.FunctionDeclarationDefinition>().forEach { def ->
        classFile.generateFunctionDeclarationDefinition(def)
    }
    module.definitions.filterIsInstance<DIMetaData.Definition.ClassDeclarationDefinition>().forEach { def ->
        classFile.generateClassDeclarationDefinition(def)
    }
    classFile.appendText("\n}")
    classFile.appendText("\nval $classModule.module : org.koin.core.module.Module get() = $generatedField")
    classFile.flush()
    classFile.close()
}

fun generateBindings(bindings: List<KSDeclaration>): String {
    return when {
        bindings.isEmpty() -> ""
        bindings.size == 1 -> "bind(${generateBinding(bindings.first())})"
        else -> bindings.joinToString(prefix = "binds(", separator = ",", postfix = ")") { generateBinding(it) }
    }
}

fun generateBinding(declaration: KSDeclaration): String {
    val packageName = declaration.containingFile!!.packageName.asString()
    val className = declaration.simpleName.asString()
    return "$packageName.$className::class"
}

fun generateConstructor(constructorParameters: List<DIMetaData.ConstructorParameter>): String {
    return constructorParameters.joinToString(prefix = "(", separator = ",", postfix = ")") {
        print(it?.qualifier?.orEmpty())
        if (it.type == DIMetaData.ConstructorParameterType.DEPENDENCY) "get()" else "params.get()"
    }
}