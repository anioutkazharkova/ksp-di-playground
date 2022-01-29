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
                bundle: FunctionBundle
            ) : FunctionDeclarationDefinition(
                bundle.packageName,
                bundle.qualifier,
                "ScopeType.Container",
                bundle.functionName,
                bundle.functionParameters,
                bundle.bindings
            )

            class Graph(
                bundle: FunctionBundle
            ) : FunctionDeclarationDefinition(
                bundle.packageName,
                bundle.qualifier,
                "ScopeType.Graph",
                bundle.functionName,
                bundle.functionParameters,
                bundle.bindings
            )

            class Shared(
                bundle: FunctionBundle
            ) : FunctionDeclarationDefinition(
                bundle.packageName,
                bundle.qualifier,
                "ScopeType.Weak",
                bundle.functionName,
                bundle.functionParameters,
                bundle.bindings
            )

            class Entity(
                bundle: FunctionBundle
            ) : FunctionDeclarationDefinition(
                bundle.packageName,
                bundle.qualifier,
                "ScopeType.Entity",
                bundle.functionName,
                bundle.functionParameters,
                bundle.bindings
            )

            class Cached(
                bundle: FunctionBundle
            ) : FunctionDeclarationDefinition(
                bundle.packageName,
                bundle.qualifier,
                "ScopeType.Cached",
                bundle.functionName,
                bundle.functionParameters,
                bundle.bindings
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
                bundle: ClassBundle
            ) : ClassDeclarationDefinition(
                bundle.packageName,
                bundle.qualifier,
                "ScopeType.Container",
                bundle.className,
                bundle.constructorParameters,
                bundle.bindings
            )

            class Shared(
                bundle: ClassBundle
            ) : ClassDeclarationDefinition(
                bundle.packageName,
                bundle.qualifier,
                "ScopeType.Weak",
                bundle.className,
                bundle.constructorParameters,
                bundle.bindings
            )

            class Entity(
                bundle: ClassBundle
            ) : ClassDeclarationDefinition(
                bundle.packageName,
                bundle.qualifier,
                "ScopeType.Entity",
                bundle.className,
                bundle.constructorParameters,
                bundle.bindings
            )

            class Cached(
                bundle: ClassBundle
            ) : ClassDeclarationDefinition(
                bundle.packageName,
                bundle.qualifier,
                "ScopeType.Cached",
                bundle.className,
                bundle.constructorParameters,
                bundle.bindings
            )

            class Graph(
                bundle: ClassBundle
            ) : ClassDeclarationDefinition(
                bundle.packageName,
                bundle.qualifier,
                "ScopeType.Graph",
                bundle.className,
                bundle.constructorParameters,
                bundle.bindings
            )
        }
    }

    data class FunctionBundle(
       val packageName: String,
       val qualifier: String?,
       val functionName: String,
       val functionParameters: List<ConstructorParameter> = emptyList(),
       val bindings: List<KSDeclaration>
    )

    data class ClassBundle(
        val packageName: String,
        val qualifier: String?,
        val className: String,
        val constructorParameters: List<ConstructorParameter> = emptyList(),
        val bindings: List<KSDeclaration>
    )

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