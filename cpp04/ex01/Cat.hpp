#ifndef CAT_HPP
# define CAT_HPP

#include "Animal.hpp"

class Cat : public Animal
{
    public:
        Cat();
        Cat(Cat const &oth);
        Cat &operator=(Cat const &temp);
        ~Cat();
        void  makeSound() const;
};

#endif