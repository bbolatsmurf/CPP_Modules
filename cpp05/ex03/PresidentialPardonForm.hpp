#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include "AForm.hpp"

class PresidentialPardonForm : public AForm
{
private:
    std::string target;

public:
    PresidentialPardonForm();
    PresidentialPardonForm(std::string target);
    PresidentialPardonForm(PresidentialPardonForm &copy);
    PresidentialPardonForm &operator=(const PresidentialPardonForm &preCopy);
    ~PresidentialPardonForm();

    void execute(const Bureaucrat& executor) const;
};

#endif
