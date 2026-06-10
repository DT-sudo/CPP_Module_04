#include "Dog.hpp"

void    Dog::setIdea(std::string _idea, int unsigned ideaIndex)
{
    brain->setIdea(_idea, ideaIndex);
}

bool    Dog::compareBrainsAddresses(const Dog& other) const
{
    return (this->brain == other.brain);
}

std::string Dog::getIdea(int unsigned ideaIndex) const
{
    return brain->getIdea(ideaIndex);
}

void    Dog::makeSound() const
{
    std::cout << "Woof-woof!" << std::endl;
}

Dog::Dog(): Animal()
{
    brain = new Brain();
    _type = "Dog";
    std::cout << "Dog constructor called" << std::endl;
}

Dog::Dog(const Dog& other): Animal(other)
{
    this->brain = new Brain();
    *this->brain = *other.brain;
}

Dog& Dog::operator=(const Dog& other)
{
    if (this != &other)
    {   
        Animal::operator=(other);
        *this->brain = *other.brain;
    }
    return *this;
}

Dog::~Dog()
{
    std::cout << "Dog destructor called" << std::endl;
    delete brain;
}

