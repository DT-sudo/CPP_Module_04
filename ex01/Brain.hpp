#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <string>
#include <iostream>

class Brain
{
    private:
    std::string ideas[100];
    
    public:
    void setIdea(std::string _idea, int unsigned ideaIndex);
    std::string getIdea(int unsigned ideaIndex) const;
    Brain();
    Brain(const Brain& other);
    ~Brain();
    Brain& operator=(const Brain& other);
};

#endif