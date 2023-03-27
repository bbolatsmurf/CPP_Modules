#include "HumanB.hpp"

void HumanB::attack(void)
{
    std::cout << this->name << " attacks with their " << this->weapon->getType() << std::endl;
}

HumanB::HumanB(std::string Name)
{
    this->name = Name;
}

void HumanB::setWeapon(Weapon &Weapon)
{
    this->weapon = &Weapon;
}

HumanB::~HumanB(){}