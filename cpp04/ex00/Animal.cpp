#include "animal.hpp"
#include <iostream>

Animal::Animal()
{
    
}

void Dog::makeSound() {
    std::cout << "Hav hav!" << std::endl;
}

void Cat::makeSound() {
    std::cout << "Miyav!" << std::endl;
}
