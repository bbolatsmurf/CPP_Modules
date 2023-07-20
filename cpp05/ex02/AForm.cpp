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

AForm &AForm::operator=(const AForm &tmp) // !!!!!!!
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

AForm::GradeTooLowException::GradeTooLowException()
{
    std::cout << "!!!!!!!<<<<<<< Not authorized! Bureaucrat's grade is not enough >>>>>>>>!!!!!!!!" << std::endl;
}

AForm::GradeTooHighException::GradeTooHighException()
{
    std::cout << "!!!!!!!<<<<<<< Not authorized! Bureaucrat's grade is so high babyyy>>>>>>>>!!!!!!!!" << std::endl;
}

AForm::NotEnoughToSign::NotEnoughToSign()
{
    std::cout << "Bureaucrat is not authorized to sign the form" << std::endl;
}

AForm::NotSignedException::NotSignedException()
{
    std::cout << "Form is not signed!" << std::endl;
}

AForm::FileCreationException::FileCreationException()
{
    std::cout << "File creation error!" << std::endl;
}

AForm::NotEnoughToExecute::NotEnoughToExecute()
{
    std::cout << "Bureaucrat's grade is not enough to execute this Aform!" << std::endl;
}