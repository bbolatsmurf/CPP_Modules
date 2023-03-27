#include "Zombie.hpp"

Zombie::Zombie(){}

Zombie::~Zombie()
{
    std::cout << this->Name << ": " << "is died..." << std::endl; 
}

void Zombie::announce(std::string name)
{
    std::cout << name << ": " << "BraiiiiiiinnnzzzZ..." << std::endl;
}

void Zombie::setName(std::string name)
{
    this->Name = name;
}

std::string Zombie::getName()
{
    return(this->Name);
}