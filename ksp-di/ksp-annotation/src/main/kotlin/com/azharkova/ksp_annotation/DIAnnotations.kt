package com.azharkova.ksp_annotation

import kotlin.reflect.KClass

@Target(AnnotationTarget.CLASS,AnnotationTarget.FUNCTION)
public annotation class Graph(val binds: Array<KClass<*>> = [], val createdAtStart: Boolean = false)

@Target(AnnotationTarget.CLASS,AnnotationTarget.FUNCTION)
public annotation class Single(val binds: Array<KClass<*>> = [])

@Target(AnnotationTarget.CLASS,AnnotationTarget.FUNCTION)
public annotation class Cached(val binds: Array<KClass<*>> = [])

@Target(AnnotationTarget.CLASS,AnnotationTarget.FUNCTION)
public annotation class Shared(val binds: Array<KClass<*>> = [])

@Target(AnnotationTarget.VALUE_PARAMETER)
public annotation class Param()

@Target(AnnotationTarget.VALUE_PARAMETER)
public annotation class Property(val value: String = "")

@Target(AnnotationTarget.CLASS)
public annotation class Container()
@Target(AnnotationTarget.CLASS, AnnotationTarget.FIELD)
public annotation class ComponentScan(val value: String = "")