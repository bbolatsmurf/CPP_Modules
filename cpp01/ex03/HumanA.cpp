#include "HumanA.hpp"

void HumanA::attack(void)
{
    std::cout << this->name << " attacks with their " << this->weapon->getType() << std::endl;
}

HumanA::HumanA(std::string name, Weapon &weaponA)
{
    this->name = name;
    this->weapon = &weaponA;
}

HumanA::~HumanA(){}