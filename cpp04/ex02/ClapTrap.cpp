#include "ClapTrap.hpp"

//Orthodox canonical form
ClapTrap::ClapTrap()
{
    std::cout << "ClapTrap constructor called" << std::endl;
    this->hitP = 10;
    this->energyP = 10;
    this->attackD = 0;
}

ClapTrap::ClapTrap(std::string name)
{
    std::cout << "ClapTrap constructor called" << std::endl;
    this->name = name;
    this->hitP = 10;
    this->energyP = 10;
    this->attackD = 0;
}

ClapTrap::ClapTrap(const ClapTrap &src)
{
    std::cout << "Copy ClapTrap constructor called" << std::endl;
    *this = src;
}

ClapTrap::~ClapTrap()
{
    std::cout << "Claptrap destructor called" << std::endl;
}

//getter and setter
std::string ClapTrap::getName()
{
    return(this->name);
}

void  ClapTrap::setName(std::string &Name)
{
    this->name = Name;
}

unsigned int  ClapTrap::getAttackDamage()
{
    return(this->attackD);
}

void  ClapTrap::setAttackDamage(unsigned int attackDamage)
{
    this->attackD = attackDamage;
}

unsigned int  ClapTrap::getHitPoint()
{
    return(this->hitP);
}

void  ClapTrap::setHitPoint(unsigned int hitPoint)
{
    this->hitP = hitPoint;
}

unsigned int  ClapTrap::getEnergyPoint()
{
    return(this->energyP);
}

void  ClapTrap::setEnergyPoint(unsigned int energyPoint)
{
    this->energyP = energyPoint;
}

//functions
void ClapTrap::attack(const std::string& target)
{
	if(this->hitP <=0 || this->energyP <=0)
		std::cout << "ClapTrap " << this->name << ", you already dead" << std::endl;
	else
	{
		std::cout << "ClapTrap " << this->name << " attacks " << target << ", causing " << this->attackD << " points of damage!" << std::endl;
		this->energyP--;
	}
}

void ClapTrap::takeDamage(int amount)
{
	if(this->hitP <=0 || this->energyP <=0)
		std::cout << "ClapTrap " << this->name << ", you already dead" << std::endl;
	else
	{
		std::cout << "ClapTrap " << this->name << " took " << amount << " points of damage" << std::endl;
		this->hitP -= amount;	
		if (this->hitP <= 0)
		{
			std::cout << "ClapTrap " << "OH NO!! " << this->name << ", you died..." << std::endl;
			exit(1);
		}
	}
}

void ClapTrap::beRepaired(int amount)
{
	if (this->hitP <= 0 || this->energyP <= 0)
	{
		std::cout << "ClapTrap " << this->name << ", you already dead" << std::endl;
		exit(1);
	}
	else
	{
		std::cout << "ClapTrap " << this->name << " got " << amount << " of hit points" << std::endl;
		this->energyP--;
		this->hitP += amount;
	}
}

//operator

ClapTrap &ClapTrap::operator=(ClapTrap const &temp)
{
    std::cout << "ClapTrap Copy assignment operator called" << std::endl;
	if (this != &temp)
	{
        this->name = temp.name;
        this->hitP = temp.hitP;
        this->energyP = temp.energyP;
        this->attackD = temp.attackD;
    }
	return (*this);
}  

std::ostream	&operator<<(std::ostream &stream, ClapTrap &clapTrap)
{
	stream << " Name: " << clapTrap.getName() << std::endl << " Hitpoints: " << clapTrap.getHitPoint() << std::endl << \
	" Energy Points: " << clapTrap.getEnergyPoint() << std::endl << " Attack Damage: " << clapTrap.getAttackDamage() << std::endl;
	return (stream);
}