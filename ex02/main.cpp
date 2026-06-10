#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

#define N 2

int main()
{
    // Animal* animal1 = new Animal();
    // Animal animal;
    Dog* dog1 = new Dog();
    Cat* cat1 = new Cat();

    dog1->makeSound();
    cat1->makeSound();

    delete dog1;
    delete cat1;
    return 0;
}
