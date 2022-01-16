package com.azharkova.kmm

import com.azharkova.kmm.configurator.ConfiguratorContainerMetaData
import com.google.devtools.ksp.processing.KSPLogger
import com.google.devtools.ksp.symbol.KSAnnotated
import com.google.devtools.ksp.symbol.KSClassDeclaration
import com.google.devtools.ksp.symbol.KSType
import kmm_di.metadata.getDefinitionAnnotation
import kmm_di.metadata.getStringQualifier

class ConfigComponentScanner(
    val logger: KSPLogger,
) {

    fun createDefinition(element: KSAnnotated): ConfiguratorContainerMetaData.Definition {
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
            logger.warn("definition(class) name -> $name", element)
            val annotation = ConfigAnnotation.valueOf(name)
            logger.warn("definition(class) annotation -> $annotation", element)
            when (annotation) {
                ConfigAnnotation.Interactor -> {
                    ConfiguratorContainerMetaData.Definition.ClassDeclarationDefinition.Interactor(
                        packageName = packageName,
                        qualifier = qualifier,
                        className = className,
                        constructorParameters = ksClassDeclaration.primaryConstructor?.parameters?.map {
                            logger.warn("param: ${it.name} ${it.type} ${it.type.javaClass.name}")
                            ConfiguratorContainerMetaData.ConstructorParameter(name = "${it.type}") }
                            ?: emptyList(),
                        bindings = declaredBindings?.map { it.declaration } ?: defaultBindings,
                    )
                }
               ConfigAnnotation.Presenter -> {
                   ConfiguratorContainerMetaData.Definition.ClassDeclarationDefinition.Presenter(
                        packageName = packageName,
                        qualifier = qualifier,
                        className = className,
                        constructorParameters = ksClassDeclaration.primaryConstructor?.parameters?.map {
                            ConfiguratorContainerMetaData.ConstructorParameter(name = "${it.type}") }
                            ?: emptyList(),
                        bindings = declaredBindings?.map { it.declaration } ?: defaultBindings,
                    )
                }
                ConfigAnnotation.View -> {
                    ConfiguratorContainerMetaData.Definition.ClassDeclarationDefinition.View(
                        packageName = packageName,
                        qualifier = qualifier,
                        className = className,
                        constructorParameters = ksClassDeclaration.primaryConstructor?.parameters?.map {
                            ConfiguratorContainerMetaData.ConstructorParameter(name = "${it.type}") }
                            ?: emptyList(),
                        bindings = declaredBindings?.map { it.declaration } ?: defaultBindings,
                    )
                }

            }

        } ?: error("Can't create definition found for $element")
    }
}