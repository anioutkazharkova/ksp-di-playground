val kspVersion: String by project
val koinVersion: String by project

plugins {
    kotlin("jvm")
}

group = "com.azharkova"
version = "1.0-SNAPSHOT"

repositories {
    mavenLocal()
    mavenCentral()
    google()
}

dependencies {
    implementation(kotlin("stdlib"))
    implementation(project(":di-multiplatform-core"))
//    implementation("com.squareup:javapoet:1.12.1")
    implementation(project(":ksp-annotation"))
    implementation("com.google.devtools.ksp:symbol-processing-api:$kspVersion")
}

sourceSets.main {
    java.srcDirs("src/main/kotlin")
}

