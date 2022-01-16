package com.azharkova.kmmdi.shared.movieslist

import com.azharkova.kmmdi.shared.base.IInteractor
import com.azharkova.kmmdi.shared.base.IView
import com.azharkova.kmmdi.shared.factory.IConfigurator
import com.azharkova.ksp_annotation.ComponentScan
import com.azharkova.ksp_annotation.Configurator

@Configurator
@ComponentScan("com.azharkova.kmmdi.shared.movieslist")
class MoviesListConfigurator : IConfigurator {
    companion object {
        val instance = MoviesListConfigurator()
    }

    override fun create(view: IView): IInteractor? {
        val interactor =
            MoviesListInteractor()
        val presenter = MoviesListPresenter()
        interactor.presenter = presenter
        presenter.view = view as? IMoviesListView
        return interactor
    }
}
