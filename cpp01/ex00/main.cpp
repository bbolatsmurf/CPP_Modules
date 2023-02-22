#include "Zombie.hpp"

int main()
{
    Zombie *a = newZombie("ZOMBİ1");
    Zombie *b = newZombie("ZOMBİ2");
    Zombie zombi("bahadir");

    zombi.announce();
    a->announce();
    b->announce();

    delete a;
    delete b;
}