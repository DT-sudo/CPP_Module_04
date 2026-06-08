#include "Brain.hpp"

void    Brain::setIdea(std::string _idea, int unsigned ideaIndex)
{
    if (ideaIndex < 100)
        ideas[ideaIndex] = _idea;
    else 
        std::cout << "index of idea is out of scope!"<< std::endl;
}

std::string Brain::getIdea(int unsigned ideaIndex) const
{
    if (ideaIndex < 100)
        return ideas[ideaIndex];
    std::cout << "index of idea is out of scope!" << std::endl;
    return "";
}

Brain::Brain()
{
    std::cout << "Brain constructor called"<< std::endl;
}

Brain::Brain(const Brain& other)
{
    for(int i = 0; i < 100; i++)
        this->ideas[i] = other.ideas[i];
}

Brain& Brain::operator=(const Brain& other)
{
    if (this != &other)
    {
        for(int i = 0; i < 100; i++)
            this->ideas[i] = other.ideas[i];
    }
    return *this;
}

Brain::~Brain()
{
    std::cout << "Brain destructor called"<< std::endl;
}