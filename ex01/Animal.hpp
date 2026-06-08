#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <string>
#include <iostream>

class Animal
{
    protected:
    std::string _type;
    
    public:
    std::string getType(void) const;
    virtual void makeSound(void) const;
    Animal();
    Animal(const Animal& other);
    Animal& operator=(const Animal& other); 
    virtual ~Animal();
};

#endif