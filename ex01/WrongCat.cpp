#include "WrongCat.hpp"

std::string WrongCat::getType() const
{
    return _type;
}

void WrongCat::makeSound() const
{
    std::cout << "'WrongCat base sounds'" << std::endl;
}

WrongCat::WrongCat(): WrongAnimal()
{
    _type = "WrongCat";
    std::cout << "WrongCat constructor called" << std::endl;
}

WrongCat::WrongCat(const WrongCat& other): WrongAnimal(other)
{
    *this = other;
}

WrongCat& WrongCat::operator=(const WrongCat& other)
{
    if (this != &other)
        WrongAnimal::operator=(other);
    return *this;
}

WrongCat::~WrongCat()
{
    std::cout << "WrongCat destructor called" << std::endl;
}