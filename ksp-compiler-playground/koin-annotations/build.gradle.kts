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

group = "ru.azharkova"
version = "1.0-SNAPSHOT"

repositories {
    mavenCentral()
    mavenLocal()
    google()
}

dependencies {
    implementation(kotlin("stdlib"))
    implementation("io.insert-koin:koin-core:$koinVersion")
}
