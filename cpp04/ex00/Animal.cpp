#include "Animal.hpp"
#include <iostream>

Animal::Animal()
{
    std::cout << "Animal constructor called" << std::endl;
}

Animal::Animal(const Animal& oth)
{
    *this = oth;
    std::cout << "Animal copy constructor called" << std::endl;
}

Animal &Animal::operator=(Animal const &temp)
{
    if(this != &temp)
    {
        this->type = temp.type;
    }
    return (*this);
}

Animal::~Animal(){std::cout << "Animal destructor called" << std::endl;}

std::string Animal::getType() // getter
{
    return(this->type);
}

void Animal::setType(std::string &Type) // setter
{
    this->type = Type;
}

void Animal::makeSound() {
    std::cout << "Animal make a sound." << std::endl;
}

