#include "Bureaucrat.hpp"

int main()
{
    int t;
    std::string temp;
    Bureaucrat emres;
    while(1){
        std::cin >> temp;
        if(!temp.compare("exit"))
            break;
        else if(!temp.compare("+"))
        {
            std::cin >> t;
            emres.incrementGrade(t);
        }
        else if(!temp.compare("-"))
        {
            std::cin >> t;
            emres.decrementGrade(t);
        }
    }
}