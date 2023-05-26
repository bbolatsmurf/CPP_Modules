#ifndef CAT_HPP
# define CAT_HPP

#include "Animal.hpp"

class Cat : public Animal
{
    public:
        Cat();
        Cat(Cat const &oth);
        Cat &operator=(Cat const &temp);
        std::string getType();
        void setType(std::string &type);
        ~Cat();
        void makeSound();
};

#endif