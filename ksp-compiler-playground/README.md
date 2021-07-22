# Koin Compiler - Sandbox

The goal of Koin compiler & Annotations project is to help declare Koin definition in a very fast and intuitive way, and generate all underlying Koin DSL.

## Koin Annotation Processing 🚀

Koin code generation is mostly instant for Koin: just a few lines to generate. It is really easily readable/debuggable. 

Even with ~~1000 of definitions, project compilation has almost no impact. 

Here with such power from Ksp project, we can bring ease even more Kotlin dependency injection. We keep Koin API as it. We just avoid you to write definitions and modules.

### Automatic definition binding

When tagging a component to be defined in Koin, we can easily declare all related supertypes directly:

```kotlin
@Single
class ElectricHeater : Heater 
```

would generate definition:

```kotlin
single { ElectricHeater() } bind Heater::class
```

### Using generated content

The only thing to setup in particular is the `org.koin.ksp.generated.*` import as follow, to be able to use genrated extensions:

```kotlin
import org.koin.ksp.generated.*

fun main() {
    startKoin {
        printLogger()
        // ... generated features
    }
    // ...
}
```

### Annotated definitions without modules

We need to use a default module with `defaultModule()` extension:

```kotlin
import org.koin.ksp.generated.*

fun main() {
    startKoin {
        printLogger()
        // generated default module
        defaultModule()
    }
    // ...
}
```

tag with `@Single` any components:

```kotlin

@Single
class CoffeeMaker(private val pump: Pump, private val heater: Heater)

@Single
class Thermosiphon(private val heater: Heater) : Pump

@Single
class ElectricHeater : Heater 
```

What is generated:
```kotlin
package org.koin.ksp.generated
// imports ...

fun KoinApplication.defaultModule() = modules(defaultModule)
val defaultModule = module {
    // definitions here ...
}
```

### Class Module and functions as definitions

We want to use a `CoffeeAppModule` module class. The `.module` extension on `CoffeeAppModule` class will be generated:

```kotlin
import org.koin.ksp.generated.*

fun main() {
    startKoin {
        printLogger()
        modules(
        // generated .module extension on module class
          CoffeeAppModule().module
        )
    }
    // ...
}
```

Let's define a class module with annotations on functions:

```kotlin
@Module
class CoffeeAppModule {

  @Single
  fun heater() : Heater = ElectricHeater()

  @Single
  fun pump(heater: Heater) : Pump = Thermosiphon(heater)

  @Single
  fun coffeeMaker(heater: Heater, pump: Pump) = CoffeeMaker(pump, heater)
}
```

What is generated:
```kotlin
package org.koin.ksp.generated
// imports

val CoffeeAppModuleModule = module {
  // generated module instance
  val moduleInstance = org.koin.example.coffee.CoffeeAppModule()
  // definitions using functions here ...
}
val org.koin.example.coffee.CoffeeAppModule.module : org.koin.core.module.Module get() = CoffeeAppModuleModule
```

### Scan all definitions into a Class Module

Rather than defining each component, we can allow a module to scan definitions for current package and sub packages:

```kotlin
import org.koin.ksp.generated.*

fun main() {
    startKoin {
        printLogger()
        modules(
        // generated .module extension on moduel class
          CoffeeAppModule().module
        )
    }
    // ...
}
```

Let's define a class module, use `@ComponentScan` to scan definitions for a given module, `@Single` on components:

```kotlin
@Module
@ComponentScan
class CoffeeAppModule
```

What is generated:
```kotlin
package org.koin.ksp.generated
// imports

val CoffeeAppModuleModule = module {
  val moduleInstance = org.koin.example.coffee.CoffeeAppModule()
  // definitions here ...
}
val org.koin.example.coffee.CoffeeAppModule.module : org.koin.core.module.Module get() = CoffeeAppModuleModule
```

We can also specify what package to scan in `@ComponentScan` value. Below we scan annotated components in `org.koin.example.test` package:

```kotlin
@Module
@ComponentScan("org.koin.example.test")
class CoffeeAppModule
```

### Unmatched definitions fallback in default module

In case of using `@ComponentScan`, if any definition is tagged but not associated to a declared module, this definition will fallback into the `defaultModule`

```kotlin
import org.koin.ksp.generated.*

fun main() {
    startKoin {
        printLogger()
        modules(
          // generated default module
          defaultModule,
        // generated .module extension on module class
          CoffeeAppModule().module
        )
    }
    // ...
}
```

### Class Module, mixing declarations

As with previous case:

```kotlin
import org.koin.ksp.generated.*

fun main() {
    startKoin {
        printLogger()
        modules(
        // generated .module extension on moduel class
          CoffeeAppModule().module
        )
    }
    // ...
}
```

We can combine `@ComponentScan` & annotated functions definition:

```kotlin
@Module
@ComponentScan
class CoffeeAppModule {

  @Single
  fun coffeeMaker(heater: Heater, pump: Pump) = CoffeeMaker(pump, heater)
}
```

We keep `@Single` annotations on needed components:

```kotlin

@Single
class CoffeeMaker(private val pump: Pump, private val heater: Heater)

@Single
class Thermosiphon(private val heater: Heater) : Pump

class ElectricHeater : Heater 
```

Generated content will add all definitions for module generation, like previous case.

### Multiple Class Modules

Any class module tagged with `@Module` will be generated. Just import the module like follow:

```kotlin
@Module
@ComponentScan
class OtherModule
```

Just use it with the `.module` generated extension:

```kotlin
import org.koin.ksp.generated.*

startKoin {
  printLogger()
  modules(
    CoffeeAppModule().module,
    // new module here, with .module generated extension
    OtherModule().module
  )
}
```

## TODO 🚧

Basic Definition Options: (In Progress)
- Create at start
- Qualifier (@Qualifier)
=> Type & Function  
  
- Generic for other keywords with factory (help for later Android)
- Android Keywords
    - @ViewModel
    - @Fragment
    - @Worker
  
Parameter Injection (@Param)
- Ctor
- Fun

Property (@Property)
- getProperty(key) <T>

Scope Structure (@Scope)
- @Scope on a type
- @ScopedIn?
- @ScopedIn for factory definitions? (visibility problem)







