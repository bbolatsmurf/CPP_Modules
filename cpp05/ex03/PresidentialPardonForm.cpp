#include "PresidentialPardonForm.hpp"
#include "AForm.hpp"
PresidentialPardonForm::PresidentialPardonForm()
{
	std::cout << "PresidentialPardonForm Default Constructor Called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : AForm(target, 5, 25)
{
	std::cout << "PresidentialPardonForm Parameter Constructor Called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm &copy) : AForm(copy)
{
	std::cout << "PresidentialPardonForm Copy Constructor Called" << std::endl;
}

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm &preCopy)
{
	std::cout << "PresidentialPardonForm Assignment Operator Called" << std::endl;
	AForm::operator=(preCopy); //Presidental'ın operatoru çalıştığında AForm'un operatorune atama yapar.
	return *this;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
    std::cout << "PresidentalPardonForm destructor called" << std::endl;   
}

void PresidentialPardonForm::execute(const Bureaucrat& executor) const
{
	if(!getSign())
		throw NotEnoughToSign();
	else if(executor.getGrade() > getGradeExecute())
		throw AForm::NotEnoughToExecute();
    std::cout << getName() << " has been pardoned by Zaphod Beeblebrox." << std::endl;
}