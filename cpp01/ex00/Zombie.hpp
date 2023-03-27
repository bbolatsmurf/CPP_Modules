#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include "iostream"
#include "string"
#include "unistd.h"

class Zombie
{
    private:
        std::string Name;
    public:
        void announce(void);
        Zombie();
        Zombie(std::string);
        ~Zombie();
};

Zombie *newZombie(std::string name);
void    randomChump(std::string name);

#endif