package com.azharkova.kmmdi.shared.base

import kotlinx.coroutines.CoroutineScope
import kotlinx.coroutines.Dispatchers
import kotlinx.coroutines.Job
import kotlinx.coroutines.SupervisorJob
import kotlin.coroutines.CoroutineContext

abstract class BaseInteractor<T : IView>(private val coroutineContext: CoroutineContext) {
    protected var scope = ModuleCoroutineScope(Dispatchers.Main + SupervisorJob())

    fun attachView() {
        scope = ModuleCoroutineScope(coroutineContext)
    }

    fun detachView() {
        scope.viewDetached()
    }
}

class ModuleCoroutineScope(
    context: CoroutineContext
) : CoroutineScope {

    private var onViewDetachJob = Job()
    override val coroutineContext: CoroutineContext = context + onViewDetachJob

    fun viewDetached() {
        onViewDetachJob.cancel()
    }
}
