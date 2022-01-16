package com.azharkova.kmm

import com.azharkova.kmm.configurator.ConfiguratorContainerMetaData
import com.google.devtools.ksp.processing.KSPLogger
import com.google.devtools.ksp.symbol.KSAnnotated
import com.google.devtools.ksp.symbol.KSClassDeclaration
import com.google.devtools.ksp.symbol.KSFunctionDeclaration
import com.google.devtools.ksp.symbol.KSType
import kmm_di.metadata.getDefinitionAnnotation
import kmm_di.metadata.getStringQualifier

class ConfiguratorScanner(
    val logger: KSPLogger
) {

    fun createClassModule(element: KSAnnotated): ContainerIndex {
        val declaration = (element as KSClassDeclaration)
        logger.warn("container(Class) -> $element", element)
        val modulePackage = declaration.containingFile?.packageName?.asString() ?: ""

        val componentScan =
            getComponentScan(declaration)
        logger.warn("container(Class) componentScan=$componentScan", element)

        val name = "$element"
        val moduleMetadata = ConfiguratorContainerMetaData.Container(
            packageName = modulePackage,
            name = name,
            type = ConfiguratorContainerMetaData.ElementType.CLASS,
            componentScan = componentScan
        )

        val annotatedFunctions = declaration.getAllFunctions()
            .filter {
                it.annotations.map { a -> a.shortName.asString() }.any { a ->
                    ConfigAnnotation.isValidAnnotation(
                        a
                    )
                }
            }
            .toList()

        logger.warn("container(Class) -> $element | found functions: ${annotatedFunctions.size}", element)
        val definitions = annotatedFunctions.mapNotNull { addDefinition(it) }
        moduleMetadata.definitions += definitions

        return ContainerIndex(modulePackage, moduleMetadata)
    }

    private fun getComponentScan(declaration: KSClassDeclaration): ConfiguratorContainerMetaData.Container.ComponentScan? {
        val componentScan = declaration.annotations.firstOrNull { it.shortName.asString() == "ComponentScan" }
        return componentScan?.let { a ->
            val value : String = a.arguments.firstOrNull { arg -> arg.name?.asString() == "value" }?.value as? String? ?: ""
           ConfiguratorContainerMetaData.Container.ComponentScan(value)
        }
    }

    private fun addDefinition(element: KSAnnotated): ConfiguratorContainerMetaData.Definition? {
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

                when (ConfigAnnotation.valueOf(name)) {
                    ConfigAnnotation.Interactor -> {
                        val createdAtStart: Boolean =
                            annotation.arguments.firstOrNull { it.name?.asString() == "createdAtStart" }?.value as Boolean?
                                ?: false
                        logger.warn("definition(function) -> createdAtStart=$createdAtStart", annotation)
                        ConfiguratorContainerMetaData.Definition.FunctionDeclarationDefinition.Interactor(
                            packageName = packageName,
                            qualifier = qualifier,
                            functionName = functionName,
                            functionParameters = ksFunctionDeclaration.parameters.map { ConfiguratorContainerMetaData.ConstructorParameter() },
                            bindings = binds?.map { it.declaration } ?: emptyList()
                        )
                    }
                    ConfigAnnotation.Presenter -> {
                        ConfiguratorContainerMetaData.Definition.FunctionDeclarationDefinition.Presenter(
                            packageName = packageName,
                            qualifier = qualifier,
                            functionName = functionName,
                            functionParameters = ksFunctionDeclaration.parameters.map { ConfiguratorContainerMetaData.ConstructorParameter() },
                            bindings = binds?.map { it.declaration } ?: emptyList()
                        )
                    }
                    ConfigAnnotation.View -> {
                        ConfiguratorContainerMetaData.Definition.FunctionDeclarationDefinition.View(
                            packageName = packageName,
                            qualifier = qualifier,
                            functionName = functionName,
                            functionParameters = ksFunctionDeclaration.parameters.map { ConfiguratorContainerMetaData.ConstructorParameter() },
                            bindings = binds?.map { it.declaration } ?: emptyList()
                        )
                    }
                }
            }
        }
    }
}

