package com.azharkova.kmmdi.shared.movieslist

import com.azharkova.kmmdi.shared.base.BasePresenter
import com.azharkova.kmmdi.shared.data.MoviesItem
import com.azharkova.ksp_annotation.Presenter

interface IMoviesListPresenter {

    fun setup(items: List<MoviesItem>)
}

@Presenter
class MoviesListPresenter :
    com.azharkova.kmmdi.shared.base.BasePresenter<IMoviesListView>(),
    IMoviesListPresenter {
   override var view: IMoviesListView? = null

    override fun setup(items: List<MoviesItem>) {
        this.view?.setup(items)
    }
}
