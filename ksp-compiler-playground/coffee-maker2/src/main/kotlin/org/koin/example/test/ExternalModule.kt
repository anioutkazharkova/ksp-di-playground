package org.koin.example.test

import org.koin.core.annotation.*


class TestComponent


@Module
class ExternalModule {

    @Single
    fun testComponent() = TestComponent()
}