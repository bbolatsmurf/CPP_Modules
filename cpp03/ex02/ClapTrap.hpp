#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include "iostream"

class ClapTrap
{
    protected:
        std::string name;
        int hitP;
        int energyP;
        int attackD;
    public:
        ClapTrap();
        ClapTrap(std::string name);
        ClapTrap(const ClapTrap &src);
        virtual ~ClapTrap();
        ClapTrap &operator=(const ClapTrap &src);

        std::string     getName();
        void            setName(std::string &name);

        unsigned int    getAttackDamage();
        void            setAttackDamage(unsigned int attackDamage);

        unsigned int    getHitPoint();
        void            setHitPoint(unsigned int hitPoint);

        unsigned int    getEnergyPoint();
        void            setEnergyPoint(unsigned int energyPoint);

        void attack(const std::string& target);
        void takeDamage(int amount);
        void beRepaired(int amount);
};

std::ostream& operator<<(std::ostream& stream, ClapTrap &claptrap);

#endif