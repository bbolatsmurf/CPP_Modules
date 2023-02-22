#include "Zombie.hpp"

void    Zombie::announce(void)
{
    std::cout << this-> Name << ": " << "BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::Zombie(std::string name) //constructor
{
    this-> Name = name;
}

Zombie::~Zombie() //destructor
{
    std::cout << this-> Name << ": " << "has been slain" << std::endl;
}
