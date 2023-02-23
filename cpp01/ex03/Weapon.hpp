#pragma once
#include <string>
#include <iostream>

class Weapon
{
    private:
        std::string type;
    public:
        const std::string& getType(void);
        void setType(std::string);
        Weapon(std::string);    
};