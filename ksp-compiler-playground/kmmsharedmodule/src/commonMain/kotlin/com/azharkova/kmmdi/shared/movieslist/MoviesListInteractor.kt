package com.azharkova.kmmdi.shared.movieslist

import com.azharkova.kmm_di.ksp.generated.AppConfiguratorContainer
import com.azharkova.kmmdi.shared.base.BaseInteractor
import com.azharkova.kmmdi.shared.base.IInteractor
import com.azharkova.kmmdi.shared.data.MoviesItem
import com.azharkova.kmmdi.shared.di.DIManager
import com.azharkova.kmmdi.shared.service.MoviesService
import com.azharkova.kmmdi.shared.util.ioDispatcher
import com.azharkova.kmmdi.shared.util.uiDispatcher
import com.azharkova.ksp_annotation.Interactor
import com.azharkova.ksp_annotation.Presenter
import kotlinx.coroutines.launch

interface IMoviesListInteractor : IInteractor {
    fun loadMovies()
}

@Interactor
class MoviesListInteractor :
    BaseInteractor<IMoviesListView>(uiDispatcher),
    IMoviesListInteractor {
    private val moviesService: MoviesService? by lazy {
        AppConfiguratorContainer.newInstance.resolve(MoviesService::class) as MoviesService?
    }

    @Presenter
    var presenter: IMoviesListPresenter? = null

    private var moviesList: ArrayList<MoviesItem> = arrayListOf()

    override fun setup(di: DIManager) {
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

