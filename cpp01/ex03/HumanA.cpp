#include "Weapon.hpp"
#include "HumanA.hpp"

void HumanA::attack(void)
{
    std::cout << this->name << "attacks with their" << this << std::endl;
}