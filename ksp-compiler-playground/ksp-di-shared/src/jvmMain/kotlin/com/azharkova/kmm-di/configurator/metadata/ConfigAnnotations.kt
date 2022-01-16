package com.azharkova.kmm

import com.azharkova.ksp_annotation.*
import kotlin.reflect.KClass

val CONFIG_ANNOTATION_LIST = listOf<KClass<*>>(
    Interactor::class,
    View::class,
    Presenter::class

)

enum class ConfigAnnotation {
    Interactor,
    View,
    Presenter
    ;

    companion object {
        private val allValues : List<String> = values().map { it.toString() }
        fun isValidAnnotation(s : String) : Boolean = s in allValues
    }
}

