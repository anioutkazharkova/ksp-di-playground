package com.azharkova.kmmdi.shared.base

abstract class BasePresenter<T : IView> :
    IPresenter {
    open var view: T? = null

    fun onAttachView(view: T) {
        this.view = view
    }

    fun onDetachView() {
        this.view = null
    }
}
