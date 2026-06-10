#include "Animal.hpp"

std::string Animal::getType() const
{
     return _type;
}

void Animal::makeSound() const
{
    std::cout << "'Base animal sounds'" << std::endl;
}

Animal::Animal()
{
    _type = "Animal";
    std::cout << "Animal constructor called" << std::endl;
}

Animal::Animal(const Animal& other)
{
    *this = other;
}

Animal::~Animal()
{
    std::cout <<"Animal destructor called" << std::endl;
}

Animal& Animal::operator=(const Animal& other)
{
    if (this != &other)
        this->_type = other._type;
    return *this;
}
