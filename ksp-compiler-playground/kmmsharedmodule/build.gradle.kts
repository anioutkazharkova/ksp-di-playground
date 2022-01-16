import org.jetbrains.kotlin.gradle.plugin.mpp.KotlinNativeTarget
val koinVersion: String by project
plugins {
    kotlin("multiplatform")
    id("com.android.library")
    kotlin("plugin.serialization") //version "1.5.10"
    id("com.google.devtools.ksp") version "1.5.31-1.0.0"
    //kotlin("jvm")
}

repositories {
    mavenCentral()
    mavenLocal()
    google()
}

kotlin {
    android()


    ios("ios") {
        binaries {
            framework {
                baseName = "kmmsharedmodule"
            }
        }
    }
    sourceSets {
        val ktorVersion = "1.6.0"
        val coroutinesVersion = "1.5.0-native-mt"
        val commonMain by getting {
            dependencies {
                implementation(project(":di-multiplatform-core"))
               // implementation(project(":ksp-di-shared"))
                implementation("io.insert-koin:koin-core:$koinVersion")
                implementation("org.jetbrains.kotlinx:kotlinx-coroutines-core:$coroutinesVersion")
                implementation("io.ktor:ktor-client-core:$ktorVersion")
                implementation("org.jetbrains.kotlinx:kotlinx-serialization-core:1.2.1")
               // implementation("org.jetbrains.kotlinx:kotlinx-serialization-json:1.2.2")
                implementation("io.ktor:ktor-client-serialization:$ktorVersion")
                kotlin.srcDir("${buildDir.absolutePath}/generated/ksp/androidDebug/kotlin")
               // kotlin.srcDir("${buildDir.absolutePath}/generated/ksp/debug/kotlin")
            }

        }
        val commonTest by getting {
            dependencies {
                implementation(kotlin("test-common"))
                implementation(kotlin("test-annotations-common"))
            }
        }
        val androidMain by getting { dependencies {
            implementation("com.android.support:multidex:1.0.3")
            implementation("io.ktor:ktor-client-android:$ktorVersion")
           kotlin.srcDir("${buildDir.absolutePath}/generated/ksp/androidDebug/kotlin")
            //kotlin.srcDir("${buildDir.absolutePath}/generated/ksp/debug/kotlin")
        }
        }
        val androidTest by getting {
            dependencies {
                implementation(kotlin("test-junit"))
                implementation("junit:junit:4.13.2")
            }
        }
        val iosMain by getting {
            dependencies {
                //implementation("org.jetbrains.kotlinx:kotlinx-coroutines-core-iosx64:1.5.1-native-mt")
                implementation("io.ktor:ktor-client-ios:$ktorVersion")

            }
           kotlin.srcDir("${buildDir.absolutePath}/generated/ksp/iosX64Main/kotlin")
        }
        val iosTest by getting
    }
}

android {
    compileSdkVersion(30)
    sourceSets["main"].manifest.srcFile("src/androidMain/AndroidManifest.xml")
    defaultConfig {
        minSdkVersion(21)
        targetSdkVersion(30)
    }
}


dependencies {
    implementation(kotlin("stdlib"))
    implementation(project(":di-multiplatform-core"))
  //implementation("io.insert-koin:koin-core:$koinVersion")
   //implementation(project(":koin-annotations"))
   // implementation(project(":ksp-annotation"))
    //ksp(project(":koin-compiler"))
   //implementation(project(":ksp-multiplatfrom-shared"))
   //ksp(project(":ksp-multiplatfrom-shared"))

    implementation(project(":ksp-di-shared"))
    ksp(project(":ksp-di-shared"))

    //implementation(project(":ksp-di-compiler"))
    //ksp(project(":ksp-di-compiler"))
}

val packForXcode by tasks.creating(Sync::class) {
    group = "build"
    val mode = System.getenv("CONFIGURATION") ?: "DEBUG"
    val sdkName = System.getenv("SDK_NAME") ?: "iphonesimulator"
    val targetName = "ios" + if (sdkName.startsWith("iphoneos")) "Arm64" else "X64"
    val framework =
        kotlin.targets.getByName<KotlinNativeTarget>(targetName).binaries.getFramework(mode)
    inputs.property("mode", mode)
    dependsOn(framework.linkTask)
    val targetDir = File(buildDir, "xcode-frameworks")
    from({ framework.outputDirectory })
    into(targetDir)
}

tasks.getByName("build").dependsOn(packForXcode)