#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat()
{
    std::cout << "Bureaucrat constructor called" << std::endl;
    this->_name = "Bureaucrat";
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

std::string Bureaucrat::getName(void)
{
    return(this->_name);
}

int Bureaucrat::getGrade(void)
{
    return(this->_grade);
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
    try
    {
        if((_grade -= value) < 1)
        {
            throw GradeTooHighException();
        }
    }
    catch(const Bureaucrat::GradeTooHighException& ex)
    {
        std::cerr << "yavas la gac tane arttiriyon" << '\n';
    }
}

void Bureaucrat::decrementGrade(int value)
{
    try
    {
        if((_grade += value) > 150)
        {
            throw GradeTooLowException();
        }
    }
    catch(const Bureaucrat::GradeTooLowException& ex)
    {
        std::cerr << "oha olm tasti" << '\n';
    }
}