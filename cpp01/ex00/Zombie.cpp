#include "Zombie.hpp"

Zombie::Zombie(){}

void    Zombie::announce(void)
{
    std::cout << this-> Name << ": " << "BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::Zombie(std::string name)
{
    this-> Name = name;
}

Zombie::~Zombie()
{
    std::cout << this-> Name << ": " << "has been slain" << std::endl;
}
