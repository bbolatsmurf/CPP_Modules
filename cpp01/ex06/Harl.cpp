#include "Harl.hpp"

void Harl::debug()
{
    std::cout << "\033[1;92m[ DEBUG ]\033[0m" << std::endl;
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
}

void Harl::info()
{
    std::cout << "\033[1;92m[ INFO ]\033[0m" << std::endl;
    std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put"
"enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void Harl::warning()
{
    std::cout << "\033[1;92m[ WARNING ]\033[0m" << std::endl;
    std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for"
"years whereas you started working here since last month." << std::endl;
}

void Harl::error()
{
    std::cout << "\033[1;91m[ ERROR ]\033[0m" << std::endl;
    std::cout << "This is unacceptable, I want to speak to the manager now." << std::endl;
}

int index(std::string level)
{
    std::string str[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    for(int i = 0; i < (int)str->length(); i++)
    {
        if(level == str[i])
            return(i);
    }
    return (-1);
}

void Harl::complain(std::string level)
{
    switch(index(level))
    {
        case 0:
            this->debug();
        case 1:
            this->info();
        case 2:
            this->warning();
        case 3:
            this->error();
            break;
        default:
            std::cout<<"[ Probably complaining about insignificant problems ]" <<std::endl;
    }
}