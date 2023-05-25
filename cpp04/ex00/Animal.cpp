#include "Animal.hpp"
#include <iostream>

Animal::Animal()
{
    std::cout << "Animal constructor called" << std::endl;

}

Animal::Animal(const Animal& oth)
{
    std::cout << "Animal copy constructor called" << std::endl;
    *this = oth;
}


Animal::~Animal(){std::cout << "Animal destructor called" << std::endl;}



void Dog::makeSound() {
    std::cout << "Hav hav!" << std::endl;
}

void Cat::makeSound() {
    std::cout << "Miyav!" << std::endl;
}
