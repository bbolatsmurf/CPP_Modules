#ifndef BRAIN_HPP
#define BRAIN_HPP
#include "AAnimal.hpp"
class Brain
{
    protected:
    std::string ideas[100];
    public:
    Brain();
    ~Brain();
    Brain(const Brain& oth);
    Brain &operator=(const Brain& oth);
    
    std::string *getIdeas() const;

};

#endif