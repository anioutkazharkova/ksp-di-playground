package com.azharkova.kmmdi.shared.movieslist

import com.azharkova.kmm_di.ksp.generated.AppConfiguratorContainer
import com.azharkova.kmmdi.shared.base.BaseInteractor
import com.azharkova.kmmdi.shared.base.IInteractor
import com.azharkova.kmmdi.shared.data.MoviesItem
import com.azharkova.kmmdi.shared.di.DIManager
import com.azharkova.kmmdi.shared.MoviesService
import com.azharkova.kmmdi.shared.util.ioDispatcher
import com.azharkova.kmmdi.shared.util.uiDispatcher
import kotlinx.coroutines.launch
//import com.azharkova.inject.di.annotations.*

interface IMoviesListInteractor : com.azharkova.kmmdi.shared.base.IInteractor {
    var presenter: IMoviesListPresenter?
    fun loadMovies()
}

//@Interactor
class MoviesListInteractor :
    BaseInteractor<com.azharkova.kmmdi.shared.movieslist.IMoviesListView>(uiDispatcher),
    IMoviesListInteractor {
    private val moviesService: MoviesService? by lazy {
        AppConfiguratorContainer.newInstance.resolve(MoviesService::class) as MoviesService?
    }

   // @LazyInject var service: MoviesService? = null

    override var presenter: IMoviesListPresenter? = null

    private var moviesList: ArrayList<com.azharkova.kmmdi.shared.data.MoviesItem> = arrayListOf()

    override fun setup(di: com.azharkova.kmmdi.shared.di.DIManager) {
        // this.moviesService = di.resolve<MoviesService>(MoviesService::class) as? MoviesService
        print(moviesService)
    }

    override fun loadMovies() {
        scope.launch {
            print(moviesService == null)
            val result = moviesService?.loadMovies()?.results
            moviesList = arrayListOf()
            moviesList.addAll(result ?: arrayListOf())
            presenter?.setup(moviesList)
        }
    }
}

