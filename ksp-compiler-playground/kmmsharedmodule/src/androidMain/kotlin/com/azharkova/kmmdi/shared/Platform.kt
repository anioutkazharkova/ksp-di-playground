package com.azharkova.kmmdi.shared


//import app.junhyounglee.statestore.annotation.StateStore
//import com.azharkova.ksp.scope.annotation.Scope

actual class Platform actual constructor() {
    actual val platform: String = "Android ${android.os.Build.VERSION.SDK_INT}"
}
/*
interface HelloStateSpec2 {
    val sample: LiveData<Int>
}
interface WorldStateSpec2 {
    val sample: LiveData<Int>
}

@StateStore(HelloStateSpec2::class)
class HelloStateStore2

@StateStore(WorldStateSpec2::class)
class WorldStateStore2*/