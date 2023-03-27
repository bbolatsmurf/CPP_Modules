#include <iostream>

int main(int ac, char **av)
{
    int i = 0;
    if(ac > 1)
    {
        while(av[++i])
        {
            for(int j = 0; j < (int)strlen(av[i]); j++)
                std::cout << (char)std::toupper(av[i][j]);
            if(i < ac - 1)
                std::cout << " ";
        }
    }
    else
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
    std::cout << std::endl;
}