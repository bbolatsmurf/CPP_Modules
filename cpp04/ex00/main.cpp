#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"

/* int main()
{
    const Animal *meta = new Animal();
    const Animal *j = new Dog();
    const Animal *i = new Cat();
    const Dog dog;
    std::cout << i->getType() << " " << std::endl;
    std::cout << j->getType() << " " << std::endl;
    i->makeSound(); // will output the cat sound!
    j->makeSound();
    meta->makeSound();
    //dog.makeSound();
    delete meta;
    delete j;
    delete i;
    return 0;
} */

int main()
{
    const WrongAnimal *ann = new WrongCat();
    const WrongAnimal *selam = new WrongDog();
    std::cout << ann->getType() << " :";
    ann->makeSound();
    std::cout << "\n"; 
    std::cout << selam->getType() << " :";
    selam->makeSound();
    std::cout << "\n";
    delete ann;
    delete selam;
}
