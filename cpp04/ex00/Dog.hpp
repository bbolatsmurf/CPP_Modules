#ifndef DOG_HPP
# define DOG_HPP

#include "Animal.hpp"

class Dog : public Animal
{
    public:
        Dog();
        Dog(Dog const &oth);
        Dog &operator=(Dog const &temp);
        std::string getType();
        void setType(std::string &type);
        ~Dog();
        void makeSound();
};

#endif