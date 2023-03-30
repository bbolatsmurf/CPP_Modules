#include "FragTrap.hpp"

FragTrap::FragTrap(){};

FragTrap::~FragTrap()
{
    std::cout << "Fragtrap destructor called" << std::endl;
}

FragTrap::FragTrap(const FragTrap &src)
{
    std::cout << "Fragtrap copy constructor called" << std::endl;
    *this = src;
}

FragTrap::FragTrap(std::string name)
{
    std::cout << "Fragtrap constructor called" << std::endl;
    this->name = name;
    this->setHitPoint(100);
    this->setEnergyPoint(100);
    this->setAttackDamage(30);
}

void FragTrap::highFivesGuys(void)
{
    std::cout << "Hey guys, high fives!" << std::endl;
}

void FragTrap::attack(const std::string& target)
{
	if(this->hitP <=0 || this->energyP <=0)
		std::cout << "FragTrap " << this->name << ", you already dead" << std::endl;
	else
	{
		std::cout << "FragTrap " << this->name << " attacks " << target << ", causing " << this->attackD << " points of damage!" << std::endl;
		this->energyP--;
	}
}

FragTrap& FragTrap::operator=(const FragTrap &src)
{
	ClapTrap::operator=(src);
	return(*this);
}