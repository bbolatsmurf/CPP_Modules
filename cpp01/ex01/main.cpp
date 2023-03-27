#include "Zombie.hpp"

int main()
{
    Zombie *temp = zombieHorde(7, "bahadir");
    delete[] temp;
}