#include "Weapon.hpp"

void Weapon::setType(std::string Type)
{
    this->type = Type;
}

const std::string& Weapon::getType(void)
{
    return(this->type);
}