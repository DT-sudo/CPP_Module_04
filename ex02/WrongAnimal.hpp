#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <string>
#include <iostream>

class WrongAnimal
{
    protected:
    std::string _type;

    public:
    std::string getType() const;
    void makeSound() const;
    WrongAnimal();
    WrongAnimal& operator=(const WrongAnimal& other);
    WrongAnimal(const WrongAnimal& other);
    virtual ~WrongAnimal();
};

#endif