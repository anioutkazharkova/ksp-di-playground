package kmm_di.metadata

import com.google.devtools.ksp.symbol.KSAnnotated
import com.google.devtools.ksp.symbol.KSAnnotation

fun KSAnnotated.getDefinitionAnnotation(): Pair<String, KSAnnotation>? {
    return try {
        val a = annotations.firstOrNull { a -> DefinitionAnnotation.isValidAnnotation(a.shortName.asString()) }
        a?.let { Pair(a.shortName.asString(),a) }
    } catch (e: Exception) {
        null
    }
}

fun KSAnnotated.getStringQualifier(): String? {
    val qualifierAnnotation = annotations.firstOrNull { a -> a.shortName.asString() == "Qualifier" }
    return qualifierAnnotation?.let {
        qualifierAnnotation.arguments.firstOrNull { a -> a.name?.asString() == "value" }?.value as? String? ?: error("Can't get value for @Qualifier")
    }
}