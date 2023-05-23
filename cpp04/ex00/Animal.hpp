#ifndef POLYMORPHISM_HPP
#define POLYMORPHISM_HPP

#include "iostream"

class Animal
{
    protected:
        std::string type;
    
    public:
        Animal(); //cons
        ~Animal(); //dest
        Animal(const Animal& oth); //copy cons
        Animal &operator=(const Animal& oth); //op. overloading
};

class Dog : private Animal //burası private mi olmalı?
{
    private:
        std::string type;
    public:
        void makeSound();
};

class Cat : private Animal
{
    private:
        std::string type;
    public:
        void makeSound();
};
#endif