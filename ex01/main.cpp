#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

#define N 2

int main()
{
    Animal* animaList[N * 2];

    std::cout << "\nMANDATORY PART:\n" << std::endl;
    for (int i = 0; i < N * 2; i++)
    {
        if(i < N)
            animaList[i] = new Dog();
        else
            animaList[i] = new Cat();
        animaList[i]->makeSound();
    }
 
    for (int i = 0; i < N * 2; i++)
        delete animaList[i];

    std::cout << "\nSHALLOW/DEEPCOPY TESTS PART:\n" << std::endl;

    Dog* dog1 = new Dog();
    Dog* dog2 = new Dog();

    dog1->setIdea("I hate cats! >:(", 0);
    dog1->setIdea("I love fish", 100);

    *dog2= *dog1;
    Dog dog3(*dog2);
    
    dog1->setIdea("Cats are nice :3", 0);

    std:: cout << "\n'DOG TESTS PART'\n" << std::endl;
    if (dog3.compareBrainsAddresses(*dog2) || dog1->compareBrainsAddresses(*dog2))
        std::cout << "There is a SHALLOW copy!\n" << std::endl;
    else
    {
        std::cout << "It's a deep copy: the same ideas has different pointers as well as brains themselves.\n" << std::endl;
        std::cout << "idea of dog1: " << dog1->getIdea(0) <<
        "\nidea of dog2: " << dog2->getIdea(0) << "\nidea of dog3: " << dog3.getIdea(0)
        << "\n" << std::endl;
    }

    delete dog1;
    delete dog2;

    Cat* cat1 = new Cat();
    Cat* cat2 = new Cat();

    cat1->setIdea("I hate dogs! >:(", 0);
    cat1->setIdea("I love fish", 100);

    *cat2= *cat1;
    Cat Cat3(*cat2);
    
    cat1->setIdea("Dogs are nice :3", 0);

    std:: cout << "\n'CAT TESTS PART'\n" << std::endl;
    if (Cat3.compareBrainsAddresses(*cat2) || cat1->compareBrainsAddresses(*cat2))
        std::cout << "There is a SHALLOW copy!\n" << std::endl;
    else
    {
        std::cout << "It's a deep copy: the same ideas has different pointers as well as brains themselves.\n" << std::endl;
        std::cout << "idea of cat1: " << cat1->getIdea(0) <<
        "\nidea of cat2: " << cat2->getIdea(0) << "\nidea of Cat3: " << Cat3.getIdea(0)
        << "\n" << std::endl;
    }

    delete cat1;
    delete cat2;

    return 0;
}
