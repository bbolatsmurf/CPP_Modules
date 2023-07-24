#include "Form.hpp"
#include "Bureaucrat.hpp"

Form::Form() : name("Default"), sign(false), gradeSign(50), gradeExecute(100)
{
    std::cout << "Form default constructor called" << std::endl;
}

Form::Form(std::string _name, int _gradeSign, int _gradeExecute) : name(_name), gradeSign(_gradeSign), gradeExecute(_gradeExecute)
{
    sign = false;
    if (gradeSign > 150 || gradeExecute > 150)
        throw Form::GradeTooLowException();
    else if (gradeSign < 1 || gradeExecute < 1)
        throw Form::GradeTooHighException();
    std::cout << "Form parameter constructor called" << std::endl;
}

Form::Form(const Form &tmp) : name(tmp.name), sign(tmp.sign), gradeSign(tmp.gradeSign), gradeExecute(tmp.gradeExecute)
{
    *this = tmp;
    std::cout << "Form copy constructor called" << std::endl;
}

Form &Form::operator=(const Form &tmp) // !!!!!!!
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

Form::~Form()
{
    std::cout << "Form destructor called" << std::endl;
}

std::string Form::getName(void) const
{
    return (this->name);
}

bool Form::getSign(void) const
{
    return (this->sign);
}

int Form::getGradeSign(void) const
{
    return (this->gradeSign);
}

int Form::getGradeExecute(void) const
{
    return (this->gradeExecute);
}

std::ostream &operator<<(std::ostream &o, const Form &obj)
{
    o << "Name: " << obj.getName() << std::endl;
    o << "Grade Sign: " << std::boolalpha << obj.getGradeExecute() << std::endl;
    o << "Grade Execute: " << obj.getGradeExecute() << std::endl;
    o << "Sign: " << obj.getSign();
    return (o);
}

void Form::beSigned(Bureaucrat &obj)
{
    if (obj.getGrade() >= this->gradeSign)
        throw GradeTooLowException();
    this->sign = true;
}

const char* Form::GradeTooHighException::what() const throw()
{
	return ("!!!!!!!<<<<<<< Not authorized! Bureaucrat's grade is not enough >>>>>>>>!!!!!!!!");
}

const char* Form::GradeTooLowException::what() const throw()
{
	return ("!!!!!!!<<<<<<< Not authorized! Bureaucrat's grade is too high>>>>>>>>!!!!!!!!");
}
