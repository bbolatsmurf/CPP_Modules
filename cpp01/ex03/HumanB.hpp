#pragma once
#include "Weapon.hpp"

class HumanB
{
    private:
        Weapon weapon;
        std::string name;
    public:
        void attack(void);
        HumanB(std::string name);
        void setWeapon(Weapon weapon);
        Weapon getWeapon(void);
};