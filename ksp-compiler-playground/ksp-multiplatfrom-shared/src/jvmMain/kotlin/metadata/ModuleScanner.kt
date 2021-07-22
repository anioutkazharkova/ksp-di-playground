package metadata

import com.google.devtools.ksp.processing.KSPLogger
import com.google.devtools.ksp.symbol.KSAnnotated
import com.google.devtools.ksp.symbol.KSClassDeclaration
import com.google.devtools.ksp.symbol.KSFunctionDeclaration
import com.google.devtools.ksp.symbol.KSType

class ModuleScanner(
    val logger: KSPLogger
) {

    fun createClassModule(element: KSAnnotated): ModuleIndex {
        val declaration = (element as KSClassDeclaration)
        logger.warn("module(Class) -> $element", element)
        val modulePackage = declaration.containingFile?.packageName?.asString() ?: ""

        val componentScan =
            getComponentScan(declaration)
        logger.warn("module(Class) componentScan=$componentScan", element)

        val name = "$element"
        val moduleMetadata = KoinMetaData.Module(
            packageName = modulePackage,
            name = name,
            type = KoinMetaData.ModuleType.CLASS,
            componentScan = componentScan
        )

        val annotatedFunctions = declaration.getAllFunctions()
            .filter {
                it.annotations.map { a -> a.shortName.asString() }.any { a ->
                    DefinitionAnnotation.isValidAnnotation(
                        a
                    )
                }
            }
            .toList()

        logger.warn("module(Class) -> $element | found functions: ${annotatedFunctions.size}", element)
        val definitions = annotatedFunctions.mapNotNull { addDefinition(it) }
        moduleMetadata.definitions += definitions

        return ModuleIndex(modulePackage, moduleMetadata)
    }

    private fun getComponentScan(declaration: KSClassDeclaration): KoinMetaData.Module.ComponentScan? {
        val componentScan = declaration.annotations.firstOrNull { it.shortName.asString() == "ComponentScan" }
        return componentScan?.let { a ->
            val value : String = a.arguments.firstOrNull { arg -> arg.name?.asString() == "value" }?.value as? String? ?: ""
            KoinMetaData.Module.ComponentScan(value)
        }
    }

    private fun addDefinition(element: KSAnnotated): KoinMetaData.Definition? {
        logger.warn("definition(function) -> $element", element)

        val ksFunctionDeclaration = (element as KSFunctionDeclaration)
        val packageName = ksFunctionDeclaration.containingFile!!.packageName.asString()
        val returnedType = ksFunctionDeclaration.returnType?.resolve()?.declaration?.simpleName?.toString()
        val qualifier = ksFunctionDeclaration.getStringQualifier()

        return returnedType?.let {
            val functionName = ksFunctionDeclaration.simpleName.asString()

            element.getDefinitionAnnotation()?.let { (name, annotation) ->
                logger.warn("definition(function) -> kind $name", annotation)
                logger.warn("definition(function) -> kind ${annotation.arguments}", annotation)

                val binds = annotation.arguments.firstOrNull { it.name?.asString() == "binds" }?.value as? List<KSType>?
                logger.warn("definition(function) -> binds=$binds", annotation)

                when (DefinitionAnnotation.valueOf(name)) {
                    DefinitionAnnotation.Single -> {
                        val createdAtStart: Boolean =
                            annotation.arguments.firstOrNull { it.name?.asString() == "createdAtStart" }?.value as Boolean?
                                ?: false
                        logger.warn("definition(function) -> createdAtStart=$createdAtStart", annotation)
                        KoinMetaData.Definition.FunctionDeclarationDefinition.Single(
                            packageName = packageName,
                            qualifier = qualifier,
                            functionName = functionName,
                            functionParameters = ksFunctionDeclaration.parameters.map { KoinMetaData.ConstructorParameter() },
                            createdAtStart = createdAtStart,
                            bindings = binds?.map { it.declaration } ?: emptyList()
                        )
                    }
                    DefinitionAnnotation.Factory -> {
                        KoinMetaData.Definition.FunctionDeclarationDefinition.Factory(
                            packageName = packageName,
                            qualifier = qualifier,
                            functionName = functionName,
                            functionParameters = ksFunctionDeclaration.parameters.map { KoinMetaData.ConstructorParameter() },
                            bindings = binds?.map { it.declaration } ?: emptyList()
                        )
                    }
                    else -> null
                }
            }
        }
    }
}