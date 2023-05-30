#include "Cat.hpp"
Cat::Cat()
{
    Cat::type = "Cat";
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

Cat::~Cat()
{
    std::cout << "Cat destructor called" << std::endl;
}

void Cat::makeSound() const
{
    std::cout << "meoww meooow" << std::endl;
}