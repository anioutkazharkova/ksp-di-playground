plugins {
    id("com.google.devtools.ksp")
    kotlin("jvm")
    idea
}

sourceSets.main {
    java.srcDirs("build/generated/ksp/main/java")
    java.srcDirs("build/generated/ksp/main/kotlin")
}

version = "1.0-SNAPSHOT"

repositories {
    mavenLocal()
    mavenCentral()
    google()
}

dependencies {
    implementation(kotlin("stdlib"))
    implementation(project(":test-processor"))
    ksp(project(":test-processor"))
}

ksp {
    arg("option1", "value1")
    arg("option2", "value2")
}
