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
        classpath("org.jetbrains.kotlin:kotlin-gradle-plugin:1.5.10")
        classpath("com.android.tools.build:gradle:7.0.0-rc01")
        //classpath(kotlin("serialization", version = kotlin_version))
        classpath("org.jetbrains.kotlin:kotlin-serialization:1.4.21")
    }
}

