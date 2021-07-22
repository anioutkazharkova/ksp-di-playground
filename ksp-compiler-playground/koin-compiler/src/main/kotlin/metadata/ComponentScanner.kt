package metadata

import com.google.devtools.ksp.processing.KSPLogger
import com.google.devtools.ksp.symbol.KSAnnotated
import com.google.devtools.ksp.symbol.KSClassDeclaration
import com.google.devtools.ksp.symbol.KSType

class ComponentScanner(
    val logger: KSPLogger,
) {

    fun createDefinition(element: KSAnnotated): KoinMetaData.Definition {
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
                    KoinMetaData.Definition.ClassDeclarationDefinition.Single(
                        packageName = packageName,
                        qualifier = qualifier,
                        className = className,
                        constructorParameters = ksClassDeclaration.primaryConstructor?.parameters?.map { KoinMetaData.ConstructorParameter() }
                            ?: emptyList(),
                        bindings = declaredBindings?.map { it.declaration } ?: defaultBindings,
                        createdAtStart = createdAtStart
                    )
                }
                DefinitionAnnotation.Factory -> {
                    KoinMetaData.Definition.ClassDeclarationDefinition.Factory(
                        packageName = packageName,
                        qualifier = qualifier,
                        className = className,
                        constructorParameters = ksClassDeclaration.primaryConstructor?.parameters?.map { KoinMetaData.ConstructorParameter() }
                            ?: emptyList(),
                        bindings = declaredBindings?.map { it.declaration } ?: defaultBindings
                    )
                }
            }
        } ?: error("Can't create definition found for $element")
    }
}