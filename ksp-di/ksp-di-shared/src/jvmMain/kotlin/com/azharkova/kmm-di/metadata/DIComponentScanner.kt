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

            val bundle: DIMetaData.ClassBundle = DIMetaData.ClassBundle(
                packageName = packageName,
                qualifier = qualifier,
                className = className,
                constructorParameters = ksClassDeclaration.primaryConstructor?.parameters?.map {
                    DIMetaData.ConstructorParameter(name = "${it.type}") }
                    ?: emptyList(),
                bindings = declaredBindings?.map { it.declaration } ?: defaultBindings,
            )
            processAnnotation (DefinitionAnnotation.valueOf(name), bundle)

        } ?: error("Can't create definition found for $element")
    }

    private fun processAnnotation(annotation: DefinitionAnnotation, bundle: DIMetaData.ClassBundle):DIMetaData.Definition.ClassDeclarationDefinition {
        when (annotation) {
            DefinitionAnnotation.Single -> {

              return  DIMetaData.Definition.ClassDeclarationDefinition.Single(
                    bundle
                )
            }
            DefinitionAnnotation.Shared -> {
               return DIMetaData.Definition.ClassDeclarationDefinition.Shared(
                    bundle)
            }
            DefinitionAnnotation.Cached -> {
              return  DIMetaData.Definition.ClassDeclarationDefinition.Cached(
                    bundle
                )
            }
            DefinitionAnnotation.Entity -> {
              return  DIMetaData.Definition.ClassDeclarationDefinition.Entity(
                    bundle
                )
            }
            DefinitionAnnotation.Graph -> {
             return  DIMetaData.Definition.ClassDeclarationDefinition.Graph(
                    bundle
                )
            }
        }
    }
}