#include "Bureaucrat.hpp"

int main()
{
    try
    {
        Bureaucrat buro("emre", 148);
        std::cout << "Bureaucrat name: " + buro.getName() + ", " + "Grade: " << buro.getGrade() <<std::endl;
        buro.incrementGrade(1);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
/*  try
    {
        Bureaucrat buro("emre", -50);
        std::cout << "Bureaucrat name: " + buro.getName() + " Grade: " << buro.getGrade() <<std::endl;
        buro.decrementGrade(150);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    } */
    return 0;
}