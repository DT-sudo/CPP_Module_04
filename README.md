# CPP Module 04

*This project has been created as part of the 42 curriculum.*

## Description

The fifth C++ module: **subtype polymorphism**, abstract classes and
interfaces. It shows what `virtual` actually changes at runtime, why a base
class with virtual functions needs a virtual destructor, and how deep copy
differs from the default shallow one.

Everything is written to the **C++98** standard.

## Exercises

| Exercise | Name | Summary |
| --- | --- | --- |
| `ex00` | Polymorphism | `Animal` with virtual `makeSound()`, derived `Dog` and `Cat` — set beside `WrongAnimal` / `WrongCat`, which omit `virtual` and therefore dispatch to the base version through a base pointer. |
| `ex01` | I don't want to set the world on fire | Each animal owns a `Brain` allocated with `new`, forcing a real copy constructor and copy assignment operator so two animals never share one brain. |
| `ex02` | Abstract class | `Animal` becomes abstract by making `makeSound()` pure virtual, so the class can no longer be instantiated on its own. |

`ex03` (Interface & recap) of the subject is not included in this module.

## Build & run

```bash
cd ex00 && make && ./animal
cd ex01 && make && ./animal
cd ex02 && make && ./animal
```

## Project structure

```
CPP_Module_04/
├── ex00/  Animal, Dog, Cat, WrongAnimal, WrongCat, main.cpp, Makefile
├── ex01/  Animal, Dog, Cat, Brain, WrongAnimal, WrongCat, main.cpp, Makefile
└── ex02/  Animal (abstract), Dog, Cat, Brain, WrongAnimal, WrongCat, main.cpp, Makefile
```

## Notes

The two failure modes this module is built to expose:

- **Missing `virtual` destructor** — deleting a `Dog` through an `Animal *`
  runs only `~Animal`, leaking the `Brain`. The base destructor is declared
  virtual for exactly this reason.
- **Shallow copy** — the compiler's default copy assignment copies the
  `Brain *`, so two animals point at one brain and the second `delete`
  is a double free. `ex01` implements deep copy to avoid it.
