package com.azharkova.kmmdi.shared.movieslist

import com.azharkova.kmmdi.shared.base.IView
import com.azharkova.kmmdi.shared.data.MoviesItem
import com.azharkova.ksp_annotation.View

interface IMoviesListView : IView {
    var interactor: IMoviesListInteractor?

    fun setup(items: List<MoviesItem>)
}
