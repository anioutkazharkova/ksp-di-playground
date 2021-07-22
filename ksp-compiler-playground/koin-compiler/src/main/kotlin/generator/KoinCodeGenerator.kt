import com.google.devtools.ksp.symbol.KSDeclaration
import metadata.KoinMetaData
import java.io.OutputStream

val DEFAULT_MODULE_HEADER = """
        package org.koin.ksp.generated
    
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

fun OutputStream.generateFunctionDeclarationDefinition(def: KoinMetaData.Definition.FunctionDeclarationDefinition) {
    val ctor = generateConstructor(def.parameters)
    val binds = generateBindings(def.bindings)
    appendText("\n\t\t\t\t${def.keyword} { moduleInstance.${def.functionName}$ctor } $binds")
}


fun OutputStream.generateClassDeclarationDefinition(def: KoinMetaData.Definition.ClassDeclarationDefinition) {
    val param =
        if (def.constructorParameters.filter { it.type == KoinMetaData.ConstructorParameterType.PARAMETER_INJECT }
                .isEmpty()) "" else " params ->"
    val ctor = generateConstructor(def.constructorParameters)
    val binds = generateBindings(def.bindings)
    appendText("\n\t\t\t\t${def.keyword} { $param${def.packageName}.${def.className}$ctor } $binds")
}

fun generateClassModule(classFile: OutputStream,module: KoinMetaData.Module) {
    classFile.appendText(
        """
            package org.koin.ksp.generated
            import org.koin.dsl.*
        """.trimIndent()
    )
    val generatedField = "${module.name}Module"
    val classModule = "${module.packageName}.${module.name}"
    classFile.appendText("\nval $generatedField = module {")
    classFile.appendText("\n\t\t\t\tval moduleInstance = $classModule()")
    // Definitions here
    module.definitions.filterIsInstance<KoinMetaData.Definition.FunctionDeclarationDefinition>().forEach { def ->
        classFile.generateFunctionDeclarationDefinition(def)
    }
    module.definitions.filterIsInstance<KoinMetaData.Definition.ClassDeclarationDefinition>().forEach { def ->
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

fun generateConstructor(constructorParameters: List<KoinMetaData.ConstructorParameter>): String {
    return constructorParameters.joinToString(prefix = "(", separator = ",", postfix = ")") {
        if (it.type == KoinMetaData.ConstructorParameterType.DEPENDENCY) "get()" else "params.get()"
    }
}