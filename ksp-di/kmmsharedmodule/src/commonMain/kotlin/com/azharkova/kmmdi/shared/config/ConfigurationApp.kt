package com.azharkova.kmmdi.shared.config

import com.azharkova.di.scope.ScopeType
import com.azharkova.kmmdi.shared.di.DIManager
import com.azharkova.kmmdi.shared.MoviesService
import com.azharkova.kmmdi.shared.NetworkClient

class ConfigurationApp {
    val appContainer: DIManager =
        DIManager()

    init {
        setup()
    }

    fun setup() {
        appContainer.addToScope(
            ScopeType.Container,
            NetworkClient::class
        ) {
            NetworkClient()
        }
        appContainer.addToScope(
            ScopeType.Container,
            MoviesService::class
        ) {
            val nc = appContainer.resolve<NetworkClient>(NetworkClient::class) as? NetworkClient
            MoviesService(nc)
        }
    }
}
