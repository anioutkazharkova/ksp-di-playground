val koinVersion: String by project

plugins {
    id("com.google.devtools.ksp")
    kotlin("jvm")
    id("maven-publish")
    idea
}

sourceSets.main {
    java.srcDirs("build/generated/ksp/main/kotlin")
}

repositories {
    mavenCentral()
    mavenLocal()
    google()
}

dependencies {
    implementation(kotlin("stdlib"))
}

