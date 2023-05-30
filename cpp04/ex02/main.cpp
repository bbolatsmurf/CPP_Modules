#include "AAnimal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "Brain.hpp"

int main()
{
    //AAnimal *j = new AAnimal();
    AAnimal *D = new Dog();
    Dog D2;
	Cat C2;
	C2.makeSound();
    D->makeSound();
    D2.makeSound();
}