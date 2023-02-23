#pragma once
#include "Weapon.hpp"
#include "HumanA.hpp"

void HumanB::attack(void)
{
    std::cout << this->name << "attacks with their" << this << std::endl;
}