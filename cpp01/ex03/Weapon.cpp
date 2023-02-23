#include "Weapon.hpp"

void Weapon::setType(std::string Type)
{
    this->type = Type;
}

const std::string& Weapon::getType(void)
{
    return(this->type);
}

Weapon::Weapon(std::string name) //cons
{
    this->type=name;
}

Weapon::~Weapon(){}