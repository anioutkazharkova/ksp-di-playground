package org.koin.example.coffee

import org.koin.core.annotation.Factory
import org.koin.core.annotation.Single
import org.koin.example.coffee.pump.Pump

@Factory
class CoffeeMaker(private val pump: Pump, private val heater: Heater) {

    fun brew() {
        heater.on()
        pump.pump()
        println(" [_]P coffee! [_]P ")
        heater.off()
    }
}