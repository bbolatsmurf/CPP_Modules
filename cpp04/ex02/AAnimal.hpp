#ifndef AAnimal_HPP
#define AAnimal_HPP
#include <iostream>
#include <string>
#include "Brain.hpp"

class AAnimal
{
    protected:
    std::string type;

    public:
    AAnimal();
    virtual ~AAnimal()=0;
    AAnimal(const AAnimal& oth);
    virtual AAnimal &operator=(const AAnimal& oth);

    void setType(const std::string &typeoth);
    std::string getType(void) const;
    
    virtual void makeSound() const;    
};
#endif