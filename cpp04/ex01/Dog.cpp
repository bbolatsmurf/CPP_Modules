#include "Dog.hpp"

Dog::Dog()
{
    Dog::type = "Dog";
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

Dog::~Dog()
{
    std::cout << "Dog destructor called" << std::endl;
}

void Dog::makeSound() const
{
    std::cout << "woof haw auuu" << std::endl;
}