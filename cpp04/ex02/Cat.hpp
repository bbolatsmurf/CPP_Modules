#ifndef CAT_HPP
#define CAT_HPP
#include "AAnimal.hpp"
#include "Brain.hpp"
class Cat:public AAnimal
{
    private:
    Brain *brain;
    public:
    Cat();
    ~Cat();
    Cat(const Cat& oth);
    Cat &operator=(const Cat& oth);
    void makeSound(void) const;
};
#endif