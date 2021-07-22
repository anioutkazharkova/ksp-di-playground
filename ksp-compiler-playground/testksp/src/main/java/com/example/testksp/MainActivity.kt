package com.example.testksp


import android.os.Bundle
import androidx.appcompat.app.AppCompatActivity
import org.koin.core.context.startKoin
import org.koin.example.CoffeeApp
import org.koin.example.coffee.CoffeeAppModule
import org.koin.example.measureDuration
import org.koin.ksp.generated.*

class MainActivity : AppCompatActivity() {
    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        setContentView(R.layout.activity_main)
        startKoin {
            printLogger()
            // if we just want teh default module
//        defaultModule()
            // else let's use some modules
            modules(
                CoffeeAppModule().module
            )
        }

        val coffeeShop = CoffeeApp()
        measureDuration("Got Coffee") {
            coffeeShop.maker.brew()
        }
    }
}