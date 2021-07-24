
pluginManagement {
    repositories {

        mavenLocal()
        gradlePluginPortal()
        google()
    }
    val kotlinVersion: String by settings
    val kspVersion: String by settings
    plugins {
        id("com.google.devtools.ksp") version kspVersion
        kotlin("jvm") version kotlinVersion
    }

}

rootProject.name = "ksp-multiplatform"

//include(":workload")
include(":koin-annotations")
include(":koin-compiler")
include(":coffee-maker")
include(":coffee-maker2")
include(":testksp")
include(":kmmsharedmodule")
include(":ksp-annotation")

include(":di-multiplatform-core")
include(":ksp-multiplatfrom-shared")
include(":ksp-di-compiler")
include(":ksp-di-shared")

