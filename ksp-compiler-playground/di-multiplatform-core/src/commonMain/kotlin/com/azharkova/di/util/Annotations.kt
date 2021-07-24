package com.azharkova.ksp_annotation

import kotlin.reflect.KClass

@Target(AnnotationTarget.CLASS,AnnotationTarget.FUNCTION)
annotation class Graph(val binds: Array<KClass<*>> = [], val createdAtStart: Boolean = false)

@Target(AnnotationTarget.CLASS,AnnotationTarget.FUNCTION)
annotation class Single(val binds: Array<KClass<*>> = [],val createdAtStart: Boolean = false)

@Target(AnnotationTarget.CLASS,AnnotationTarget.FUNCTION)
annotation class Cached(val binds: Array<KClass<*>> = [])

@Target(AnnotationTarget.CLASS,AnnotationTarget.FUNCTION)
annotation class Shared(val binds: Array<KClass<*>> = [])

@Target(AnnotationTarget.CLASS,AnnotationTarget.FUNCTION)
annotation class Entity(val binds: Array<KClass<*>> = [])

@Target(AnnotationTarget.VALUE_PARAMETER)
annotation class Param()

@Target(AnnotationTarget.VALUE_PARAMETER)
annotation class Property(val value: String = "")

@Target(AnnotationTarget.CLASS)
annotation class Container()
@Target(AnnotationTarget.CLASS, AnnotationTarget.FIELD)
annotation class ComponentScan(val value: String = "")