package org.koin.example

import org.koin.core.component.KoinComponent
import org.koin.core.component.inject
import org.koin.core.context.startKoin
import org.koin.core.time.measureDuration
import org.koin.example.coffee.CoffeeAppModule
import org.koin.example.coffee.CoffeeMaker
import org.koin.example.di.CoffeeTesterModule
import org.koin.example.test.ExternalModule
import org.koin.ksp.generated.*

class CoffeeApp : KoinComponent {
    val maker: CoffeeMaker by inject()
}

fun main() {
    startKoin {
        printLogger()
        // if we just want teh default module
//        defaultModule()
        // else let's use some modules
        modules(
            CoffeeAppModule().module,
            CoffeeTesterModule().module,
            ExternalModule().module,
        )
    }

    val coffeeShop = CoffeeApp()
    measureDuration("Got Coffee") {
        coffeeShop.maker.brew()
    }
}

fun measureDuration(msg: String, code: () -> Unit): Double {
    val duration = measureDuration(code)
    println("$msg in $duration ms")
    return duration
}