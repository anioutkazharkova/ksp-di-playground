
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
include(":testksp")
include(":kmmsharedmodule")
include(":ksp-annotation")

include(":di-multiplatform-core")
include(":ksp-di-compiler")
include(":ksp-di-shared")

