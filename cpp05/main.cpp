#include "Bureaucrat.hpp"

int main()
{
    try
    {
        Bureaucrat buro;
        buro.incrementGrade(20);
        buro.incrementGrade(30);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    return 0;
}