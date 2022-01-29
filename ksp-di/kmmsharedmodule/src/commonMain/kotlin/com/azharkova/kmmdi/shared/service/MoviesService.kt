package com.azharkova.kmmdi.shared

import com.azharkova.ksp_annotation.*
import com.azharkova.kmmdi.shared.data.MoviesList
import com.azharkova.kmmdi.shared.network.Configuration

@Single
class MoviesService(val networkClient: NetworkClient?) {

    suspend fun loadMovies(): MoviesList? {
        val url = "discover/movie?api_key=${Configuration.API_KEY}&page=1&sort_by=popularity.desc"
        return networkClient?.loadContentData(url)
    }

    suspend fun searchMovies(query: String): MoviesList? {
        val url = "search/movie?api_key=${Configuration.API_KEY}&page=1&query=$query"
        return networkClient?.loadContentData(url)
    }
}

class SampleService() {
    //@Create fun provideNetwork(): NetworkClient?
}