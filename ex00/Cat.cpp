#include "Cat.hpp"

void Cat::makeSound() const
{
    std::cout << "Miu-miu" << std::endl;
}

Cat::Cat(): Animal()
{
    _type = "Cat";
    std::cout << "Cat constructor called" << std::endl;
}

Cat::Cat(const Cat& other): Animal(other)
{
    if(this != &other)
        *this = other;
}

Cat& Cat::operator=(const Cat& other)
{
    if (this != &other)
    {
        Animal::operator=(other);
    }
    return *this;
}

Cat::~Cat()
{
    std::cout << "Cat destructor called" << std::endl;
}
