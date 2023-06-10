#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat()
{
    std::cout << "Bureaucrat constructor called" << std::endl;
    this->_name = "Barackaucrat";
    this->_grade = 50;
}

Bureaucrat::Bureaucrat(const Bureaucrat& tmp)
{
    *this = tmp;
    std::cout << "Bureaucrat copy constructor called" << std::endl;
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& tmp)
{
    if(this != &tmp)
    {
        this->_name = tmp._name;
    }
    return(*this);
}

Bureaucrat::~Bureaucrat()
{
    std::cout << "Bureaucrat destructor called" << std::endl;
}

std::string Bureaucrat::getName(void) const
{
    return(this->_name);
}

int Bureaucrat::getGrade(void) const
{
    return(this->_grade);
}

std::ostream& operator<<(std::ostream &o, const Bureaucrat &obj)
{
	o << obj.getName() << ", bureaucrat grade	" << obj.getGrade();
    return(o);
}

Bureaucrat::GradeTooHighException::GradeTooHighException()
{
    std::cout << "GradeTooHighException constructor called" << std::endl;
}

Bureaucrat::GradeTooHighException::~GradeTooHighException()
{
    std::cout << "GradeTooHighException destructor called" << std::endl;
}

Bureaucrat::GradeTooLowException::GradeTooLowException()
{
    std::cout << "GradeTooLowException constructor called" << std::endl;
}

Bureaucrat::GradeTooLowException::~GradeTooLowException()
{
    std::cout << "GradeTooLowException destructor called" << std::endl;
}

void Bureaucrat::incrementGrade(int value)
{
    if((_grade - value) < 1)
        throw Bureaucrat::GradeTooHighException();
    _grade -= value;
}

void Bureaucrat::decrementGrade(int value)
{
    if((_grade + value) > 150)
        throw GradeTooLowException();
    _grade += value;
}