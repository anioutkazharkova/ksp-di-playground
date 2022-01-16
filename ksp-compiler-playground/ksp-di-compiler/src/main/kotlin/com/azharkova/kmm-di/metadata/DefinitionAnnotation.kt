package kmm_di.metadata
import com.azharkova.ksp_annotation.Cached
import com.azharkova.ksp_annotation.Graph
import com.azharkova.ksp_annotation.Shared
import com.azharkova.ksp_annotation.Single
import kotlin.reflect.KClass

val DEFINITION_ANNOTATION_LIST = listOf<KClass<*>>(
    Single::class,
    Graph::class,
    Cached::class,
    Shared::class
)

enum class DefinitionAnnotation {
    Single,
    Graph,
    Cached,
    Shared
    ;

    companion object {
        private val allValues : List<String> = values().map { it.toString() }
        fun isValidAnnotation(s : String) : Boolean = s in allValues
    }
}
