#include "ClapTrap.hpp"
#include "FragTrap.hpp"

int main()
{
    FragTrap a("bahadir");

    std::cout << "Hit point: " << a.getHitPoint() << "    " << "Energy point: " << a.getEnergyPoint() << "    " << "Attack damage: " << a.getAttackDamage() << std::endl << std::endl;
	a.attack("bahadir");
	std::cout << "Hit point: " << a.getHitPoint() << "    " << "Energy point: " << a.getEnergyPoint() << "    " << "Attack damage: " << a.getAttackDamage() << std::endl << std::endl;
	a.takeDamage(a.getAttackDamage());
    std::cout << "Hit point: " << a.getHitPoint() << "    " << "Energy point: " << a.getEnergyPoint() << "    " << "Attack damage: " << a.getAttackDamage() << std::endl << std::endl;
	a.beRepaired(5);
    std::cout << "Hit point: " << a.getHitPoint() << "    " << "Energy point: " << a.getEnergyPoint() << "    " << "Attack damage: " << a.getAttackDamage() << std::endl << std::endl;
	a.highFivesGuys();
	return 0;
}