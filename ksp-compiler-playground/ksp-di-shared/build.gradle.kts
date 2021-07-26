val kspVersion: String by project
val koinVersion: String by project

plugins {
    kotlin("multiplatform")
    id("java-library")
    id("maven-publish")
}

repositories {
    mavenLocal()
    mavenCentral()
    google()
}
group = "com.azharkova"
version = "1.0-SNAPSHOT"
kotlin {

    //this is only used as kapt (annotation processor, so pure jvm)
    jvm {
        val main by compilations.getting {
            kotlinOptions {
                jvmTarget = "1.8"
            }
        }
    }
    sourceSets {

        val jvmMain by getting {
            dependencies {
                implementation(kotlin("stdlib"))
                implementation(project(":di-multiplatform-core"))
                implementation("com.google.devtools.ksp:symbol-processing-api:$kspVersion")
                //code generation
                val kotlinpoetVersion = "1.8.0"
                implementation("com.squareup:kotlinpoet:$kotlinpoetVersion")
                implementation("com.squareup:kotlinpoet-metadata:$kotlinpoetVersion")
                implementation("com.squareup:kotlinpoet-metadata-specs:$kotlinpoetVersion")
                implementation("com.squareup:kotlinpoet-classinspector-elements:$kotlinpoetVersion")

            }
        }

    }
}