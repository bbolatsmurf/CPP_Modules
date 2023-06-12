#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
    try
    {
        Bureaucrat bure("Baho", 31);
        Form forma;
        bure.incrementGrade(30);
        forma.beSigned(bure);
        bure.signForm(forma);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
}