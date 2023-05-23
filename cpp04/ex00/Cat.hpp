#ifndef CAT_HPP
#define CAT_HPP
#include "Animal.hpp"

class Cat : private Animal
{
    private:
        std::string type;
    public:
        void makeSound();
};
#endif