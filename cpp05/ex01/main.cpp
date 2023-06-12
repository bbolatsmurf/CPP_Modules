#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
    try
    {
        Bureaucrat bure("sikko", 31);
        Form forma;
        bure.incrementGrade(10);
        forma.beSigned(bure);
        bure.signForm(forma);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
}