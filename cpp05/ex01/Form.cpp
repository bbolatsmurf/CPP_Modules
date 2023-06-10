#include "Form.hpp"
#include "Bureaucrat.hpp"

Form::Form() : name("Formy"), gradeSign(25), gradeExecute(25), sign(false)
{
    std::cout << "Form constructor called" << std::endl;
}

Form::Form(const Form& tmp) : name("Formy"), gradeSign(25), gradeExecute(25)
{
    std::cout << "Form copy constructor called" << std::endl;
}

Form& Form::operator=(const Form &tmp)
{
    if(this != &tmp)
    {
       *const_cast<std::string*>(&this->name) = tmp.name;
    }
    return(*this);
}

Form::~Form()
{
    std::cout << "Form destructor called" << std::endl;
}

std::string Form::getName(void) const
{
    return(this->name);
}

bool Form::getSign(void) const
{
    return(this->sign);
}

int Form::getGradeSign(void) const
{
    return(this->gradeSign);
}

int Form::getGradeExecute(void) const
{
    return(this->gradeExecute);
}

std::ostream& operator<<(std::ostream &o, const Form &obj)
{
    o << "Name: " << obj.getName() << std::endl;
    o << "Sign: " << obj.getSign() << std::endl;
    o << "Grade Sign: " << obj.getGradeSign() << std::endl;
    o << "Grade Execute: " << obj.getGradeExecute() << std::endl;
}

std::string Form::beSigned(Bureaucrat &obj)
{
    if(obj.getGrade() >= this->gradeSign)
        throw GradeTooLowException();
    else
        this->sign = true;
}
