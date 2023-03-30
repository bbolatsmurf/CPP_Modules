#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
    ScavTrap a("bahadir");
    //std::cout << a << std::endl <<std::endl;
    std::cout << "Hit point: " << a.getHitPoint() << "    " << "Energy point: " << a.getEnergyPoint() << "    " << "Attack damage: " << a.getAttackDamage() << std::endl << std::endl;
	a.attack("X");
	std::cout << "Hit point: " << a.getHitPoint() << "    " << "Energy point: " << a.getEnergyPoint() << "    " << "Attack damage: " << a.getAttackDamage() << std::endl << std::endl;
	a.takeDamage(3);
    std::cout << "Hit point: " << a.getHitPoint() << "    " << "Energy point: " << a.getEnergyPoint() << "    " << "Attack damage: " << a.getAttackDamage() << std::endl << std::endl;
	a.beRepaired(7);
    std::cout << "Hit point: " << a.getHitPoint() << "    " << "Energy point: " << a.getEnergyPoint() << "    " << "Attack damage: " << a.getAttackDamage() << std::endl << std::endl;
    a.guardGate();
	return 0;
}