#include "AForm.hpp"
#include "Bureaucrat.hpp"

AForm::AForm() : name("Default"), sign(false), gradeSign(50), gradeExecute(100)
{
    std::cout << "Form default constructor called" << std::endl;
}

AForm::AForm(std::string _name, int _gradeSign, int _gradeExecute) : name(_name), gradeSign(_gradeSign), gradeExecute(_gradeExecute)
{
    sign = false;
    if (gradeSign > 150 || gradeExecute > 150)
        throw AForm::GradeTooLowException();
    else if (gradeSign < 1 || gradeExecute < 1)
        throw AForm::GradeTooHighException();
    std::cout << "Form parameter constructor called" << std::endl;
}

AForm::AForm(const AForm &tmp) : name(tmp.name), sign(tmp.sign), gradeSign(tmp.gradeSign), gradeExecute(tmp.gradeExecute)
{
    *this = tmp;
    std::cout << "Form copy constructor called" << std::endl;
}

AForm &AForm::operator=(const AForm &tmp)
{
    if (this != &tmp)
    {
        *const_cast<std::string *>(&name) = tmp.name;
        *const_cast<int *>(&gradeSign) = tmp.gradeSign;
        *const_cast<int *>(&gradeExecute) = tmp.gradeExecute;
        sign = tmp.sign;
        std::cout << "Form assignment operator called" << std::endl;
    }
    return (*this);
}

AForm::~AForm()
{
    std::cout << "Form destructor called" << std::endl;
}

std::string AForm::getName(void) const
{
    return (this->name);
}

bool AForm::getSign(void) const
{
    return (this->sign);
}

int AForm::getGradeSign(void) const
{
    return (this->gradeSign);
}

int AForm::getGradeExecute(void) const
{
    return (this->gradeExecute);
}

std::ostream &operator<<(std::ostream &o, const AForm &obj)
{
    o << "Name: " << obj.getName() << std::endl;
    o << "Grade Sign: " << std::boolalpha << obj.getGradeExecute() << std::endl;
    o << "Grade Execute: " << obj.getGradeExecute() << std::endl;
    o << "Sign: " << obj.getSign();
    return (o);
}

void AForm::beSigned(Bureaucrat &obj)
{
    if (obj.getGrade() >= this->gradeSign)
        throw GradeTooLowException();
    this->sign = true;
}

const char* AForm::GradeTooHighException::what() const throw()
{
	return ("!!!!!!!<<<<<<< Not authorized! Bureaucrat's grade is not enough >>>>>>>>!!!!!!!!");
}

const char* AForm::GradeTooLowException::what() const throw()
{
	return ("!!!!!!!<<<<<<< Not authorized! Bureaucrat's grade is too high>>>>>>>>!!!!!!!!");
}

const char* AForm::NotEnoughToSign::what() const throw()
{
    return("Bureaucrat is not authorized to sign the form");
}

const char* AForm::NotSignedException::what() const throw()
{
    return("Form is not signed!");
}

const char* AForm::FileCreationException::what() const throw()
{
    return("File creation error!");
}

const char* AForm::NotEnoughToExecute::what() const throw()
{
    return("Bureaucrat's grade is not enough to execute this Aform!");
}
