#include "Dog.hpp"

void Dog::makeSound() const
{
    std::cout << "Woof-woof!" << std::endl;
}

Dog::Dog(): Animal()
{   
    _type = "Dog";
    std::cout << "Dog constructor called" << std::endl;
}

Dog::Dog(const Dog& other): Animal(other)
{
    *this = other;
}

Dog& Dog::operator=(const Dog& other)
{
    if (this != &other)
        Animal::operator=(other);
    return *this;
}

Dog::~Dog()
{
    std::cout << "Dog destructor called" << std::endl;
}
