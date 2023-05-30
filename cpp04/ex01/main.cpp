#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "Brain.hpp"

#define N 4

int main(void)
{
	// Test 1
	Animal *animals[N];

	for (int i = 0; i < N; i++)
	{
		if (i % 2 == 0)
			animals[i] = new Cat();

		else
			animals[i] = new Dog();
	}

	for (int i = 0; i < N; i++)
		delete animals[i];
    //system("leaks animal");
	// Test 2
	//const Animal* j = new Dog();
	//const Animal* i = new Cat();
	//delete j;
	//delete i;
	//return 0;
}