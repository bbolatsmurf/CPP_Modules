#include "Harl.hpp"

void	Harl::debug(void)
{
    std::cout << "[ DEBUG ]\n" << "7XL-çift peynirli-üçlü turşu-özel-ketçaplı burgerime fazladan domuz pastır- ması yemeyi seviyorum. Gerçekten seviyorum!\n\n";
}
void	Harl::info(void)
{
    std::cout << "[ INFO ]\n" << "Ekstra domuz pastırması eklemenin daha fazla paraya mal olduğuna inanamıy- orum. Burgerime yeterince pastırma koymadınız! Yapsaydınız, daha fazlasını iste- mezdim!\n\n";
}
void	Harl::warning(void)
{
    std::cout << "[ WARNING ]\n" << "Bence bedavaya fazladan pastırma yemeyi hak ediyorum. Ben yıllardır geliyorum, sen geçen aydan beri burada çalışmaya başladın.\n\n";
}
void	Harl::error(void)
{
    std::cout << "[ ERROR ]\n" << "Bu kabul edilemez! Şimdi müdürle konuşmak istiyorum.\n\n";
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