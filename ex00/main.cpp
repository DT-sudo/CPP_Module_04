#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
    Animal a0;
    Animal a1(a0);
    Dog d0;
    Dog d1(d0);
    Cat c0;
    Cat c1(c0);

    a0.makeSound();
    d1.makeSound();
    c1.makeSound();


    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    const WrongAnimal* wa = new WrongAnimal();
    const WrongAnimal* wc = new WrongCat();

    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    i->makeSound(); //will output the cat sound!
    j->makeSound();
    meta->makeSound();

    wa->makeSound();
    wc->makeSound();

    delete meta;
    delete j;
    delete i;
    delete wa;
    delete wc;

    return 0;
}
