#include <string>
#include <iostream>
#include <fstream>

void ft_func(std::string filename, std::string s1, std::string s2)
{
    std::ifstream a(filename);
    std::ofstream b(filename + ".replace" );
    std::string line;
    std::string before;
    std::string after;
    int pos = 0;
    while(getline(a, line))
    {
        if((pos = line.find(s1)))
        {
            before = line.substr(0, line.find(s1));
            after = line.substr(line.find(s1) + s1.length(), s2.length());
            line = before + s2 + after;
        }
        b << line << std::endl;
    }
}

int main(int ac, char **av)
{
    if(ac != 4)
        std::cerr<< "Error!" << std::endl;
    else
    {
        ft_func(av[1], av[2], av[3]);
    }
}