val koinVersion: String by project
plugins {
    id("com.android.application")
    id("kotlin-android")
    id("com.google.devtools.ksp")
    //id("kmm-inject-di")
    //kotlin("jvm")
}

android {
    compileSdk = 30
    packagingOptions {
        // pickFirst "META-INF/DEPENDENCIES"
        exclude("META-INF/*")
    }

    defaultConfig {
        applicationId = "com.azharkova.multiplatform_sample"
        minSdk=26
        targetSdk=30
        versionCode = 1
        versionName = "1.0"
        multiDexEnabled = true
       // testInstrumentationRunner("androidx.test.runner.AndroidJUnitRunner")
    }
    compileOptions {
        sourceCompatibility(JavaVersion.VERSION_1_8)
        targetCompatibility(JavaVersion.VERSION_1_8)
        sourceCompatibility = JavaVersion.VERSION_1_8
        targetCompatibility = JavaVersion.VERSION_1_8
    }
    kotlinOptions {
        jvmTarget = "1.8"
    }
    sourceSets {
        sourceSets.getByName("main") {
            java.srcDir("build/generated/ksp")
            java.srcDir("src/main/kotlin")
            java.srcDir("src/main/java")
        }
    }
}

repositories {
    mavenCentral()
    mavenLocal()
    google()
    maven("https://jitpack.io")
    maven("https://dl.bintray.com/kotlin/kotlin-eap")
}

dependencies {
    implementation(project(":kmmsharedmodule"))

    implementation(kotlin("stdlib"))

    implementation("androidx.core:core-ktx:1.5.0")
    implementation("androidx.appcompat:appcompat:1.3.0")
    implementation("com.google.android.material:material:1.3.0")
    implementation("androidx.constraintlayout:constraintlayout:2.0.4")
    implementation("org.jetbrains.kotlin:kotlin-stdlib:1.6.10")
    implementation("androidx.navigation:navigation-fragment-ktx:2.3.5")
    implementation("androidx.navigation:navigation-ui-ktx:2.2.2")
    implementation("androidx.lifecycle:lifecycle-livedata-ktx:2.2.0")
    implementation("androidx.lifecycle:lifecycle-viewmodel-ktx:2.2.0")
    implementation("com.github.edgar-zigis:materialtextfield:1.4.4")
    implementation("androidx.legacy:legacy-support-v4:1.0.0")
    implementation("com.squareup.picasso:picasso:2.71828")
    testImplementation("junit:junit:4.13.2")
    implementation("com.squareup:kotlinpoet:1.10.1")
    androidTestImplementation("androidx.test.ext:junit:1.1.2")
    androidTestImplementation("androidx.test.espresso:espresso-core:3.3.0")
    implementation("com.android.support:multidex:1.0.3")
    implementation(project(":di-multiplatform-core"))
}