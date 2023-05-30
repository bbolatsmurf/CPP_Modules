#ifndef POLYMORPHISM_HPP
#define POLYMORPHISM_HPP

#include "iostream"

class Animal
{
    protected:
        std::string type;
    
    public:
        Animal(); //cons
        Animal(std::string type);
        Animal(const Animal& oth); //copy cons
        Animal &operator=(const Animal& oth); //op. overloading
        virtual ~Animal(); //virtual dest, because it must be like this
        std::string getType() const;
        virtual void makeSound() const;
};

#endif