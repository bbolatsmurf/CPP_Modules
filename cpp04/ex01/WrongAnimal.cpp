#include "WrongAnimal.hpp"
#include <iostream>

WrongAnimal::WrongAnimal()
{
    WrongAnimal::type = "WrongAnimal";
    std::cout << "WrongAnimal constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& oth)
{
    *this = oth;
    std::cout << "WrongAnimal copy constructor called" << std::endl;
}

WrongAnimal &WrongAnimal::operator=(WrongAnimal const &temp)
{
    if(this != &temp)
    {
        this->type = temp.type;
    }
    return (*this);
}

WrongAnimal::~WrongAnimal(){std::cout << "WrongAnimal destructor called" << std::endl;}

std::string WrongAnimal::getType() const// getter
{
    return(this->type);
}

void WrongAnimal::makeSound() const {
    std::cout << "WrongAnimal made a sound." << std::endl;
}

WrongAnimal::WrongAnimal(std::string type) : type(type)
{
	std::cout << "WrongAnimal Name Constructor Called" << std::endl;
}

//WrongCat
WrongCat::WrongCat()
{
    WrongCat::type = "WrongCat";
    std::cout << "WrongCat constructor called" << std::endl;
}

WrongCat::WrongCat(const WrongCat& temp)
{
    *this = temp;
    std::cout << "WrongCat copy constructor called" << std::endl;
}

WrongCat &WrongCat::operator=(WrongCat const &temp)
{
    if(this != &temp)
    {
        this->type = temp.type;
    }
    return(*this);
}

WrongCat::~WrongCat()
{
    std::cout << "WrongCat destructor called" << std::endl;
}

void WrongCat::makeSound() const
{
    std::cout << "meoww" << std::endl;
}

WrongCat::WrongCat(std::string type) : WrongAnimal(type)
{
	std::cout << "WrongCat Name Constructor Called" << std::endl;
}

//WrongDog
WrongDog::WrongDog()
{
    WrongDog::type = "WrongDog";
    std::cout << "WrongDog constructor called" << std::endl;
}

WrongDog::WrongDog(const WrongDog& temp)
{
    *this = temp;
    std::cout << "WrongDog copy constructor called" << std::endl;
}

WrongDog &WrongDog::operator=(WrongDog const &temp)
{
    if(this != &temp)
    {
        this->type = temp.type;
    }
    return(*this);
}

WrongDog::~WrongDog()
{
    std::cout << "WrongDog destructor called" << std::endl;
}

void WrongDog::makeSound() const
{
    std::cout << "haw haw" << std::endl;
}

WrongDog::WrongDog(std::string type) : WrongAnimal(type)
{
	std::cout << "Dog Name Constructor Called" << std::endl;
}