#include "Bureaucrat.hpp"
#include "Form.hpp"

Bureaucrat::Bureaucrat()
{
    std::cout << "Bureaucrat default constructor called" << std::endl;
}

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name), _grade(grade)
{
    if(grade < 1)
        throw GradeTooHighException();
    else if(grade > 150)
        throw GradeTooLowException();
    std::cout << "Bureaucrat parameter constructor called" << std::endl;
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
        *const_cast<std::string*>(&this->_name) = tmp._name;
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
	o << obj.getName() << ", bureaucrat grade " << obj.getGrade();
    return(o);
}

Bureaucrat::GradeTooHighException::GradeTooHighException()
{
    std::cout << "GradeTooHighException constructor called" << std::endl;
}

Bureaucrat::GradeTooLowException::GradeTooLowException()
{
    std::cout << "GradeTooLowException constructor called" << std::endl;
}

// Exception classes don't have to be a destructor. Because the program will be continued.
/* Bureaucrat::GradeTooHighException::~GradeTooHighException()
{
    std::cout << "GradeTooHighException destructor called" << std::endl;
}

Bureaucrat::GradeTooLowException::~GradeTooLowException()
{
    std::cout << "GradeTooLowException destructor called" << std::endl;
} */

void Bureaucrat::incrementGrade(int value)
{
    if((_grade - value) < 1)
        throw Bureaucrat::GradeTooHighException();
    _grade -= value;
}

void Bureaucrat::decrementGrade(int value)
{
    if((_grade + value) > 150)
        throw Bureaucrat::GradeTooLowException();
    _grade += value;
}

void Bureaucrat::signForm(const Form& form)
{
    try
    {
        form.beSigned(*this);
        std::cout << Bureaucrat() << " signed " << form << std::endl;
    }
    catch(const Form::GradeTooHighException& e)
    {
        std::cerr << *this << " couldn't sign " << form << " because " << e.what() <<std::endl;
    }
}