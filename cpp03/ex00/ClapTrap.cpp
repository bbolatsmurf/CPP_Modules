#include "ClapTrap.hpp"

//Orthodox canonical form
ClapTrap::ClapTrap()
{
    std::cout << "ClapTrap constructor called" << std::endl;
    this->attackDamage = 10;
    this->hitPoint = 10;
    this->attackDamage = 0;
}

ClapTrap::ClapTrap(std::string Name)
{
    std::cout << "Name ClapTrap constructor called" << std::endl;
    this->Name = name;
    this->hitP = 10;
    this->energyP = 10;
    this->attackD = 10;
}

ClapTrap::ClapTrap(const ClapTrap &src)
{
    std::cout << "Copy ClapTrap constructor called" << std::endl;
    *this = src; //this = &src
}

ClapTrap::~ClapTrap()
{
    std::cout << "Destructor called" << std::endl;
}

//getter and setter
std::string getName()
{
    return(this->Name);
}

void setName(std::string &Name)
{
    this->name = Name;
}

unsigned int getAttackDamage()
{
    return(this->attackD);
}

void setAttackDamage(unsigned int attackDamage);
{
    this->attackD = attackDamage;
}

unsigned int getHitPoint()
{
    return(this->hitP);
}

void setHitPoint(unsigned int hitPoint)
{
    this->hitP = hitPoint
}

unsigned int getEnergyPoint()
{
    return(this->energyP);
}

void setEnergyPoint(unsigned int energyPoint)
{
    this->energyP = energyPoint;
}

