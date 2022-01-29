package com.azharkova.kmmdi.shared.factory

import com.azharkova.kmmdi.shared.base.IInteractor
import com.azharkova.kmmdi.shared.base.IView
import com.azharkova.kmmdi.shared.movieslist.IMoviesListView
import com.azharkova.kmmdi.shared.movieslist.MoviesListConfigurator

interface IConfigurator {
    fun create(view: IView): IInteractor?
}

class ModuleConfig {
    companion object {
        val instance = ModuleConfig()
    }

    fun config(view: IView): IInteractor? {
        if (view is IMoviesListView) {
            return MoviesListConfigurator.instance.create(view)
        }
        return null
    }
}
