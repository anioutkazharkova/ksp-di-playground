plugins {
    kotlin("jvm")
}
allprojects {
    repositories {
        mavenCentral()
        mavenLocal()
        google()

    }
}
buildscript {
    val kotlin_version by extra("1.6.10")
    dependencies {
        classpath("org.jetbrains.kotlin:kotlin-gradle-plugin:1.6.10")
        classpath("com.android.tools.build:gradle:7.0.2")
        classpath("org.jetbrains.kotlin:kotlin-serialization:1.6.10")
    }
}

