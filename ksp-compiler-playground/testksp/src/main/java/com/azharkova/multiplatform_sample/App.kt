package com.azharkova.multiplatform_sample

import android.app.Application
import android.content.Context
import androidx.multidex.MultiDex
import androidx.multidex.MultiDexApplication
import com.azharkova.kmmdi.shared.config.ConfigurationApp
//import dagger.hilt.android.AndroidEntryPoint
//import dagger.hilt.android.HiltAndroidApp
//import org.koin.example.CoffeeApp

//@HiltAndroidApp
class App : MultiDexApplication() {
    companion object {
        val config = ConfigurationApp()
        val container = config.appContainer
        lateinit var INSTANCE: App
        var AppContext: Context? = null
    }

    override fun attachBaseContext(base: Context?) {
        super.attachBaseContext(base)
        MultiDex.install(this)
    }

    override fun onCreate() {
        super.onCreate()
        INSTANCE = this
        AppContext = this
    }
}