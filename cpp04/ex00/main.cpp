#include "ClapTrap.hpp"

int main()
{
    ClapTrap a("bahadir");

    std::cout << "Hit point: " << a.getHitPoint() << "    " << "Energy point: " << a.getEnergyPoint() << "    " << "Attack damage: " << a.getAttackDamage() << std::endl << std::endl;
	a.attack("X");
	std::cout << "Hit point: " << a.getHitPoint() << "    " << "Energy point: " << a.getEnergyPoint() << "    " << "Attack damage: " << a.getAttackDamage() << std::endl << std::endl;
	a.takeDamage(20);
    std::cout << "Hit point: " << a.getHitPoint() << "    " << "Energy point: " << a.getEnergyPoint() << "    " << "Attack damage: " << a.getAttackDamage() << std::endl << std::endl;
	a.beRepaired(5);
    std::cout << "Hit point: " << a.getHitPoint() << "    " << "Energy point: " << a.getEnergyPoint() << "    " << "Attack damage: " << a.getAttackDamage() << std::endl << std::endl;
	return 0;
}