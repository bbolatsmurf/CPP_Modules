#include <iostream>
#include <string>

int main()
{
    std::string str = "HI THIS IS BRAIN";
    std::string *stringPTR = &str;
    std::string &stringREF = str;

    std::cout << "\033[33mString variable address: \033[0m" << &str << std::endl;
    std::cout << "\033[33mAddress pointed by stringPTR: \033[0m" << stringPTR << std::endl;
    std::cout << "\033[33mAddress referred by stringREF: \033[0m" << &stringREF << std::endl;

    std::cout << "\033[33mString value: \033[0m" << str << std::endl;
    std::cout << "\033[33mValue pointed by stringPTR: \033[0m" << *stringPTR << std::endl;
    std::cout << "\033[33mValue referred by stringREF: \033[0m" << stringREF << std::endl;
    return 0;
}