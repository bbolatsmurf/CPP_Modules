#include "Zombie.hpp"

void    randomChump(std::string name)
{
    Zombie b = Zombie(name);
    b.announce();
}