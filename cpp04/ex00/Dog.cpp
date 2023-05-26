#include "Animal.hpp"

Dog::Dog()
{
    std::cout << "Dog constructor called" << std::endl;
}

Dog::Dog(const Dog& temp)
{
    *this = temp;
    std::cout << "Dog copy constructor called" << std::endl;
}

Dog &Dog::operator=(Dog const &temp)
{
    if(this != &temp)
    {
        this->type = temp.type;
    }
    return(*this);
}

std::string Dog::getType() // getter
{
    return(this->type);
}

void Dog::setType(std::string &Type) // setter
{
    this->type = Type;
}

Dog::~Dog()
{
    std::cout << "Dog destructor called" << std::endl;
}

void Dog::makeSound()
{
    std::cout << "hav hav auuu" << std::endl;
}