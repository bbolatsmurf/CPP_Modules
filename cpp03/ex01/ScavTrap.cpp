#include "ScavTrap.hpp"

ScavTrap::ScavTrap(){};

ScavTrap::ScavTrap(std::string name)
{
    std::cout << "Scavtrap constructor called" << std::endl;
    this->name = name;
    this->setHitPoint(100);
    this->setEnergyPoint(50);
    this->setAttackDamage(20);
}

ScavTrap::~ScavTrap()
{
    std::cout << "Scavtrap destructor called" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &src)
{
    std::cout << "Copy Scavtrap constructor called" << std::endl;
    *this = src;
}

void    ScavTrap::guardGate()
{
    std::cout << this->name << "is now in Gate keeper mode." << std::endl;
}

void ScavTrap::attack(const std::string& target)
{
	if(this->hitP <=0 || this->energyP <=0)
		std::cout << "ScavTrap " << this->name << ", you already dead" << std::endl;
	else
	{
		std::cout << "ScavTrap " << this->name << " attacks " << target << ", causing " << this->attackD << " points of damage!" << std::endl;
		this->energyP--;
	}
}

ScavTrap &ScavTrap::operator=(const ScavTrap &src)
{
	ClapTrap::operator=(src);
	return(*this);
}