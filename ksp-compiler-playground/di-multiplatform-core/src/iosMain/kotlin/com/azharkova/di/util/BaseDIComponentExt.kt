package com.azharkova.di.container

import com.azharkova.di.container.BaseDIComponent
import com.azharkova.di.scope.ScopeType
import com.azharkova.di.util.register
import com.azharkova.di.util.resolve
import kotlinx.cinterop.ObjCClass

fun <T : Any> BaseDIComponent.register(scope: ScopeType = ScopeType.Graph, clazz: ObjCClass, fabric: () -> T?) {
    appContainer.register(clazz, scope, fabric)
}

fun <T : Any> BaseDIComponent.resolve(clazz: ObjCClass): Any? {
    return appContainer.resolve(clazz)
}