package kmm_di.metadata


import com.google.devtools.ksp.symbol.KSDeclaration

sealed class DIMetaData {

    data class Container(
        val packageName: String,
        val name: String,
        val definitions: MutableList<Definition> = mutableListOf(),
        val type: ElementType = ElementType.FIELD,
        val componentScan: ComponentScan? = null
    ) : DIMetaData() {
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
    ) : DIMetaData() {

        sealed class FunctionDeclarationDefinition(
            packageName: String,
            qualifier: String?,
            keyword: String,
            val functionName: String,
            val parameters: List<ConstructorParameter> = emptyList(),
            bindings: List<KSDeclaration>
        ) : Definition(packageName, qualifier, keyword, bindings) {

            class Single(
                packageName: String,
                qualifier: String?,
                functionName: String,
                functionParameters: List<ConstructorParameter> = emptyList(),
                val createdAtStart: Boolean = false,
                bindings: List<KSDeclaration>
            ) : FunctionDeclarationDefinition(
                packageName,
                qualifier,
                "ScopeType.Container",
                functionName,
                functionParameters,
                bindings
            )

            class Graph(
                packageName: String,
                qualifier: String?,
                functionName: String,
                functionParameters: List<ConstructorParameter> = emptyList(),
                bindings: List<KSDeclaration>
            ) : FunctionDeclarationDefinition(
                packageName,
                qualifier,
                "ScopeType.Graph",
                functionName,
                functionParameters,
                bindings
            )

            class Shared(
                packageName: String,
                qualifier: String?,
                functionName: String,
                functionParameters: List<ConstructorParameter> = emptyList(),
                bindings: List<KSDeclaration>
            ) : ClassDeclarationDefinition(
                packageName,
                qualifier,
                "ScopeType.Weak",
                functionName,
                functionParameters,
                bindings
            )

            class Entity(
                packageName: String,
                qualifier: String?,
                functionName: String,
                functionParameters: List<ConstructorParameter> = emptyList(),
                bindings: List<KSDeclaration>
            ) : ClassDeclarationDefinition(
                packageName,
                qualifier,
                "ScopeType.Entity",
                functionName,
                functionParameters,
                bindings
            )

            class Cached(
                packageName: String,
                qualifier: String?,
                functionName: String,
                functionParameters: List<ConstructorParameter> = emptyList(),
                bindings: List<KSDeclaration>
            ) : ClassDeclarationDefinition(
                packageName,
                qualifier,
                "ScopeType.Cached",
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

            class Single(
                packageName: String,
                qualifier: String?,
                className: String,
                constructorParameters: List<ConstructorParameter> = emptyList(),
                val createdAtStart: Boolean,
                bindings: List<KSDeclaration>
            ) : ClassDeclarationDefinition(
                packageName,
                qualifier,
                "ScopeType.Container",
                className,
                constructorParameters,
                bindings
            )

            class Shared(
                packageName: String,
                qualifier: String?,
                className: String,
                constructorParameters: List<ConstructorParameter> = emptyList(),
                bindings: List<KSDeclaration>
            ) : ClassDeclarationDefinition(
                packageName,
                qualifier,
                "ScopeType.Weak",
                className,
                constructorParameters,
                bindings
            )

            class Entity(
                packageName: String,
                qualifier: String?,
                className: String,
                constructorParameters: List<ConstructorParameter> = emptyList(),
                bindings: List<KSDeclaration>
            ) : ClassDeclarationDefinition(
                packageName,
                qualifier,
                "ScopeType.Entity",
                className,
                constructorParameters,
                bindings
            )

            class Cached(
                packageName: String,
                qualifier: String?,
                className: String,
                constructorParameters: List<ConstructorParameter> = emptyList(),
                bindings: List<KSDeclaration>
            ) : ClassDeclarationDefinition(
                packageName,
                qualifier,
                "ScopeType.Cached",
                className,
                constructorParameters,
                bindings
            )

            class Graph(
                packageName: String,
                qualifier: String?,
                className: String,
                constructorParameters: List<ConstructorParameter> = emptyList(),
                bindings: List<KSDeclaration>
            ) : ClassDeclarationDefinition(
                packageName,
                qualifier,
                "ScopeType.Graph",
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