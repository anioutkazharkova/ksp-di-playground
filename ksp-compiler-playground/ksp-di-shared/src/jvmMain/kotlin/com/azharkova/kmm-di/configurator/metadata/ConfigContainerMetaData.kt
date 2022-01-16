package com.azharkova.kmm.configurator


import com.azharkova.kmm.ConfigAnnotation
import com.google.devtools.ksp.symbol.KSDeclaration

sealed class ConfiguratorContainerMetaData {

    data class Container(
        val packageName: String,
        val name: String,
        val definitions: MutableList<Definition> = mutableListOf(),
        val type: ElementType = ElementType.FIELD,
        val componentScan: ComponentScan? = null
    ) :ConfiguratorContainerMetaData() {
        data class ComponentScan(val packageName: String = "")

        fun acceptDefinition(defPackageName: String): Boolean {
            return when {
                componentScan == null -> false
                componentScan.packageName.isNotEmpty() -> defPackageName.contains(
                    componentScan.packageName,
                    ignoreCase = true
                )
                componentScan.packageName.isEmpty() -> defPackageName.contains(
                    packageName,
                    ignoreCase = true
                )
                else -> false
            }
        }
    }

    sealed class Definition(
        val packageName: String,
        val qualifier: String? = null,
        val keyword: String,
        val bindings: List<KSDeclaration>
    ) : ConfiguratorContainerMetaData() {

        sealed class FunctionDeclarationDefinition(
            packageName: String,
            qualifier: String?,
            keyword: String,
            val functionName: String,
            val parameters: List<ConstructorParameter> = emptyList(),
            bindings: List<KSDeclaration>
        ) : Definition(packageName, qualifier, keyword, bindings) {

            class Presenter(
                packageName: String,
                qualifier: String?,
                functionName: String,
                functionParameters: List<ConstructorParameter> = emptyList(),
                val createdAtStart: Boolean = false,
                bindings: List<KSDeclaration>
            ) : FunctionDeclarationDefinition(
                packageName,
                qualifier,
                "Presenter",
                functionName,
                functionParameters,
                bindings
            )

            class Interactor(
                packageName: String,
                qualifier: String?,
                functionName: String,
                functionParameters: List<ConstructorParameter> = emptyList(),
                bindings: List<KSDeclaration>
            ) : FunctionDeclarationDefinition(
                packageName,
                qualifier,
                "Interactor",
                functionName,
                functionParameters,
                bindings
            )

            class View(
                packageName: String,
                qualifier: String?,
                functionName: String,
                functionParameters: List<ConstructorParameter> = emptyList(),
                bindings: List<KSDeclaration>
            ) : ClassDeclarationDefinition(
                packageName,
                qualifier,
                "View",
                functionName,
                functionParameters,
                bindings
            )
        }

        sealed class ClassDeclarationDefinition(
            packageName: String,
            qualifier: String?,
            keyword: String,
            val className: String,
            val constructorParameters: List<ConstructorParameter> = emptyList(),
            bindings: List<KSDeclaration>,
        ) : Definition(packageName, qualifier, keyword, bindings) {

            class Presenter(
                packageName: String,
                qualifier: String?,
                className: String,
                constructorParameters: List<ConstructorParameter> = emptyList(),
                bindings: List<KSDeclaration>
            ) : ClassDeclarationDefinition(
                packageName,
                qualifier,
                "Presenter",
                className,
                constructorParameters,
                bindings
            )

            class Interactor(
                packageName: String,
                qualifier: String?,
                className: String,
                constructorParameters: List<ConstructorParameter> = emptyList(),
                bindings: List<KSDeclaration>
            ) : ClassDeclarationDefinition(
                packageName,
                qualifier,
                "Interactor",
                className,
                constructorParameters,
                bindings
            )

            class View(
                packageName: String,
                qualifier: String?,
                className: String,
                constructorParameters: List<ConstructorParameter> = emptyList(),
                bindings: List<KSDeclaration>
            ) : ClassDeclarationDefinition(
                packageName,
                qualifier,
                "View",
                className,
                constructorParameters,
                bindings
            )
        }
    }

    enum class ElementType {
        FIELD, CLASS
    }

    data class ConstructorParameter(
        val qualifier: String? = null,
        val name: String? = null,
        val type: ConstructorParameterType = ConstructorParameterType.DEPENDENCY
    )

    enum class ConstructorParameterType {
        DEPENDENCY, PARAMETER_INJECT
    }
}
