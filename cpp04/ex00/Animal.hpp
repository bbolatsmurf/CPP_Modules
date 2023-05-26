#ifndef POLYMORPHISM_HPP
#define POLYMORPHISM_HPP

#include "iostream"
#include "Cat.hpp"
#include "Dog.hpp"

class Animal
{
    protected:
        std::string type;
    
    public:
        Animal(); //cons
        ~Animal(); //dest
        Animal(const Animal& oth); //copy cons
        Animal &operator=(const Animal& oth); //op. overloading
        std::string getType();
        void setType(std::string &type);
        virtual void makeSound();
};




#endif