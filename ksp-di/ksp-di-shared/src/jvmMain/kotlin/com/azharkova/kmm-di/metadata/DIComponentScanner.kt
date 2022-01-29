package kmm_di.metadata

import com.google.devtools.ksp.processing.KSPLogger
import com.google.devtools.ksp.symbol.KSAnnotated
import com.google.devtools.ksp.symbol.KSClassDeclaration
import com.google.devtools.ksp.symbol.KSType



class DIComponentScanner(
    val logger: KSPLogger,
) {

    fun createDefinition(element: KSAnnotated): DIMetaData.Definition {
        logger.warn("definition(class) -> $element", element)
        val ksClassDeclaration = (element as KSClassDeclaration)
        val packageName = ksClassDeclaration.containingFile!!.packageName.asString()
        val className = ksClassDeclaration.simpleName.asString()
        val qualifier = ksClassDeclaration.getStringQualifier()
        logger.warn("definition(class) qualifier -> $qualifier", element)
        return element.getDefinitionAnnotation()?.let { (name, annotation) ->
            val declaredBindings =
                annotation.arguments.firstOrNull { it.name?.asString() == "binds" }?.value as? List<KSType>?
            val defaultBindings = ksClassDeclaration.superTypes.map { it.resolve().declaration }.toList()
            when (DefinitionAnnotation.valueOf(name)) {
                DefinitionAnnotation.Single -> {
                    val createdAtStart: Boolean =
                        annotation.arguments.firstOrNull { it.name?.asString() == "createdAtStart" }?.value as Boolean?
                            ?: false
                    DIMetaData.Definition.ClassDeclarationDefinition.Single(
                        packageName = packageName,
                        qualifier = qualifier,
                        className = className,
                        constructorParameters = ksClassDeclaration.primaryConstructor?.parameters?.map {
                            logger.warn("param: ${it.name} ${it.type} ${it.type.javaClass.name}")
                            DIMetaData.ConstructorParameter(name = "${it.type}") }
                            ?: emptyList(),
                        bindings = declaredBindings?.map { it.declaration } ?: defaultBindings,
                        createdAtStart = createdAtStart
                    )
                }
                DefinitionAnnotation.Shared -> {
                    DIMetaData.Definition.ClassDeclarationDefinition.Shared(
                        packageName = packageName,
                        qualifier = qualifier,
                        className = className,
                        constructorParameters = ksClassDeclaration.primaryConstructor?.parameters?.map {
                            DIMetaData.ConstructorParameter(name = "${it.type}") }
                            ?: emptyList(),
                        bindings = declaredBindings?.map { it.declaration } ?: defaultBindings,
                    )
                }
                DefinitionAnnotation.Cached -> {
                    DIMetaData.Definition.ClassDeclarationDefinition.Cached(
                        packageName = packageName,
                        qualifier = qualifier,
                        className = className,
                        constructorParameters = ksClassDeclaration.primaryConstructor?.parameters?.map {
                            DIMetaData.ConstructorParameter(name = "${it.type}") }
                            ?: emptyList(),
                        bindings = declaredBindings?.map { it.declaration } ?: defaultBindings,
                    )
                }
                DefinitionAnnotation.Entity -> {
                    DIMetaData.Definition.ClassDeclarationDefinition.Entity(
                        packageName = packageName,
                        qualifier = qualifier,
                        className = className,
                        constructorParameters = ksClassDeclaration.primaryConstructor?.parameters?.map {
                            DIMetaData.ConstructorParameter(name = "${it.type}") }
                            ?: emptyList(),
                        bindings = declaredBindings?.map { it.declaration } ?: defaultBindings,
                    )
                }
                DefinitionAnnotation.Graph -> {
                    DIMetaData.Definition.ClassDeclarationDefinition.Graph(
                        packageName = packageName,
                        qualifier = qualifier,
                        className = className,
                        constructorParameters = ksClassDeclaration.primaryConstructor?.parameters?.map { DIMetaData.ConstructorParameter() }
                            ?: emptyList(),
                        bindings = declaredBindings?.map { it.declaration } ?: defaultBindings
                    )
                }
            }

        } ?: error("Can't create definition found for $element")
    }
}