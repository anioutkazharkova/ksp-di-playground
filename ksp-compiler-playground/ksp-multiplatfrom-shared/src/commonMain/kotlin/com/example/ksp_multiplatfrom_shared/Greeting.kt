package com.example.ksp_multiplatfrom_shared

class Greeting {
    fun greeting(): String {
        return "Hello, ${Platform().platform}!"
    }


}