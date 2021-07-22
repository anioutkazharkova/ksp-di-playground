plugins {
    kotlin("multiplatform")
    id("maven-publish")
    //id("convention.publication")
}

group = "io.github.anioutkazharkova"
version = "1.0.5.4"

repositories {
    mavenCentral()
    mavenLocal()
}

kotlin {
    jvm {
        compilations.all {
            kotlinOptions.jvmTarget = "1.8"
        }
        testRuns["test"].executionTask.configure {
            useJUnit()
        }
    }
    val hostOs = System.getProperty("os.name")
    /*val iosTarget = when {
        hostOs == "X64"-> iosX64("ios")
        hostOs == "arm64" -> iosArm64("ios")
        else -> iosX64("ios")
    }*/
    ios {
        binaries {
            framework {
                baseName = "library"
            }
        }
    }
    
    sourceSets {
        val commonMain by getting
        val commonTest by getting {
            dependencies {
                implementation(kotlin("test-common"))
                implementation(kotlin("test-annotations-common"))
            }
        }
        val jvmMain by getting
        val jvmTest by getting {
            dependencies {
                implementation(kotlin("test-junit"))
            }
        }
        val iosMain by getting
        val iosTest by getting
    }
}
