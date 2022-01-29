package com.azharkova.di.container

import com.azharkova.di.scope.ScopeType
import kotlin.reflect.KClass

open class BaseDIComponent {
    val appContainer: DIContainer by lazy { DIContainer() }

    init {
        setup()
    }

    open fun setup() {}

    fun <T : Any> register(type: String? = "", fabric: () -> T?) {
        appContainer.register(type, ScopeType.Graph, fabric)
    }

    fun <T : Any> resolve(type: String?): Any? {
        return appContainer.resolve(type)
    }

    fun <T : Any> addToScope(scope: ScopeType, type: String? = "", fabric: () -> T?) {
        appContainer.register(type, ScopeType.Graph, fabric)
    }

    fun <T : Any> resolve(type: KClass<T>): Any? {
        return appContainer.resolve(type)
    }

    fun <T : Any> addToScope(scope: ScopeType, type: KClass<T>, fabric: () -> T?) {
        appContainer.register(type, ScopeType.Graph, fabric)
    }

}