#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog: public Animal
{
    private:
    Brain*                  brain;

    public:
    Dog();
    Dog(const Dog& other);
    Dog& operator=(const Dog& other);
    ~Dog();

    void                    makeSound() const;
    void                    setIdea(std::string _idea, int unsigned ideaIndex);
    std::string             getIdea(int unsigned ideaIndex) const;
    bool                    compareBrainsAddresses(const Dog& other) const;
};

#endif 