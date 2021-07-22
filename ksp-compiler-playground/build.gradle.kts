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
    val kotlin_version by extra("1.5.10")
    dependencies {
        classpath("org.jetbrains.kotlin:kotlin-gradle-plugin:$kotlin_version")
        classpath("com.android.tools.build:gradle:7.0.0-beta05")
        //classpath(kotlin("serialization", version = kotlin_version))
        classpath("org.jetbrains.kotlin:kotlin-serialization:1.4.21")
    }
}

