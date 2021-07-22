package com.example.kmmsharedmodule
import org.koin.core.context.startKoin
import org.koin.example.CoffeeApp
import org.koin.example.coffee.CoffeeAppModule
import org.koin.example.measureDuration
import org.koin.ksp.generated.*
class Greeting {
    fun greeting(): String {
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
        return "Hello, ${Platform().platform}!"
    }
}