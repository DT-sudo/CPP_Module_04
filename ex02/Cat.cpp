#include "Cat.hpp"

void    Cat::setIdea(std::string _idea, int unsigned ideaIndex)
{
    brain->setIdea(_idea, ideaIndex);
}

bool    Cat::compareBrainsAddresses(const Cat& other) const
{
    return (this->brain == other.brain);
}

std::string Cat::getIdea(int unsigned ideaIndex) const
{
    return brain->getIdea(ideaIndex);
}


void Cat::makeSound() const
{
    std::cout << "Miu-miu" << std::endl;
}

Cat::Cat(): Animal()
{
    brain = new Brain;
    _type = "Cat";
    std::cout << "Cat constructor called" << std::endl;
}

Cat::Cat(const Cat& other): Animal(other)
{
    this->brain = new Brain;
    *this->brain = *other.brain;
}

Cat& Cat::operator=(const Cat& other)
{
    if (this != &other)
    {
        Animal::operator=(other);
        *this->brain = *other.brain;
    }
    return *this;
}

Cat::~Cat()
{
    std::cout << "Cat destructor called" << std::endl;
    delete brain;
}
