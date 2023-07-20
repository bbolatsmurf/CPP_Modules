#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include "iostream"
#include "AForm.hpp"
#include <fstream>

class ShrubberyCreationForm : public AForm
{
private:
    std::string target;

public:
    ShrubberyCreationForm();
    ShrubberyCreationForm(std::string target);
    ShrubberyCreationForm(const ShrubberyCreationForm &copy);
    ShrubberyCreationForm &operator=(const ShrubberyCreationForm &src); // !
    ~ShrubberyCreationForm();

    void execute(Bureaucrat const &execute) const;
};

#endif