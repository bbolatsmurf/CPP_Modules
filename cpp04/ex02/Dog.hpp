#ifndef DOG_HPP
#define DOG_HPP
#include "AAnimal.hpp"
#include "Brain.hpp"
class Dog:public AAnimal
{
    protected:
    Brain *brain;
    public:
    Dog();
    ~Dog();
    Dog(const Dog& oth);
    Dog &operator=(const Dog& oth);

    void makeSound(void) const;
};
#endif