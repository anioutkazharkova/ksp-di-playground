val koinVersion: String by project

plugins {
    id("com.google.devtools.ksp")
    kotlin("jvm")
    idea
}

sourceSets.main {
    java.srcDirs("build/generated/ksp/main/kotlin")
}

version = "1.0-SNAPSHOT"

repositories {
    mavenCentral()
    mavenLocal()
    google()
}

dependencies {
    implementation(kotlin("stdlib"))
    implementation("io.insert-koin:koin-core:$koinVersion")
    implementation(project(":koin-annotations"))
    ksp(project(":koin-compiler"))
    implementation(project(":coffee-maker2"))
}
