package kmm_di.metadata
import com.azharkova.ksp_annotation.Single
import com.azharkova.ksp_annotation.*
import kotlin.reflect.KClass

val DEFINITION_ANNOTATION_LIST = listOf<KClass<*>>(
    Single::class,
    Graph::class,
    Cached::class,
    Entity::class,
    Shared::class

)

enum class DefinitionAnnotation {
    Single,
    Graph,
    Cached,
    Entity,
    Shared
    ;

    companion object {
        private val allValues : List<String> = values().map { it.toString() }
        fun isValidAnnotation(s : String) : Boolean = s in allValues
    }
}
