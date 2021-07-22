package org.koin.example.test

import org.koin.core.annotation.Qualifier
import org.koin.core.annotation.Single
import org.koin.example.coffee.CoffeeMaker

@Single
@Qualifier("test")
class CoffeeMakerTester(val coffeeMaker: CoffeeMaker)