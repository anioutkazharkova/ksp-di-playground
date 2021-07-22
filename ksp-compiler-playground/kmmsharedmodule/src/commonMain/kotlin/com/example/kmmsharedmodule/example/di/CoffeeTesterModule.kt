package org.koin.example.di

import org.koin.core.annotation.ComponentScan
import org.koin.core.annotation.Module
import org.koin.core.annotation.Single
import org.koin.example.coffee.CoffeeMaker

@Module
@ComponentScan("org.koin.example.test")
class CoffeeTesterModule