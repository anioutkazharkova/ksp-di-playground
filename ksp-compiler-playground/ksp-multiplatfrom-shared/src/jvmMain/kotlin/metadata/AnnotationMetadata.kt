package metadata

import org.koin.core.annotation.Factory
import org.koin.core.annotation.Single
import kotlin.reflect.KClass

val DEFINITION_ANNOTATION_LIST = listOf<KClass<*>>(
    Single::class,
    Factory::class
)

enum class DefinitionAnnotation {
    Single,
    Factory
    ;

    companion object {
        private val allValues : List<String> = values().map { it.toString() }
        fun isValidAnnotation(s : String) : Boolean = s in allValues
    }
}
