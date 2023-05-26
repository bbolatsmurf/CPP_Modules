#include "Animal.hpp"

Cat::Cat()
{
    std::cout << "Cat constructor called" << std::endl;
}

Cat::Cat(const Cat& temp)
{
    *this = temp;
    std::cout << "Cat copy constructor called" << std::endl;
}

Cat &Cat::operator=(Cat const &temp)
{
    if(this != &temp)
    {
        this->type = temp.type;
    }
    return(*this);
}

std::string Cat::getType() // getter
{
    return(this->type);
}

void Cat::setType(std::string &Type) // setter
{
    this->type = Type;
}

Cat::~Cat()
{
    std::cout << "Cat destructor called" << std::endl;
}

void Cat::makeSound()
{
    std::cout << "meoww meooow" << std::endl;
}