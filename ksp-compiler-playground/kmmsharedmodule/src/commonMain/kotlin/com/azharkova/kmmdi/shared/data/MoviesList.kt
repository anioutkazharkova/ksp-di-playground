package com.azharkova.kmmdi.shared.data

import kotlinx.serialization.Serializable

@Serializable
data class MoviesList(val results: List<MoviesItem>)
