#ifndef CAT_HPP
#define CAT_HPP
#include "Animal.hpp"

class Dog : private Animal //burası private mi olmalı?
{
    private:
        std::string type;
    public:
        void makeSound();
};
#endif