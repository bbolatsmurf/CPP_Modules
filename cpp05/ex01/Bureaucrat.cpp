#include "Bureaucrat.hpp"
#include "Form.hpp"

Bureaucrat::Bureaucrat() : _name("Baho"), _grade(1)
{
    std::cout << "Bureaucrat default constructor called" << std::endl;
}

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name), _grade(grade)
{
    if (grade < 1)
        throw GradeTooHighException();
    else if (grade > 150)
        throw GradeTooLowException();
    std::cout << "Bureaucrat parameter constructor called" << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat &tmp) : _name(tmp._name), _grade(tmp._grade)
{
    std::cout << "Bureaucrat copy constructor called" << std::endl;
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &tmp)
{
    if (this != &tmp)
    {
        *const_cast<std::string *>(&this->_name) = tmp._name; // const değişkenin değerini değiştirmeye calıstıgımızdan dolayı const_cast kullanırız.
        _grade = tmp._grade;
    }
    std::cout << "Bureaucrat assignment operator called" << std::endl;
    return (*this);
}

Bureaucrat::~Bureaucrat()
{
    std::cout << "Bureaucrat destructor called" << std::endl;
}

std::string Bureaucrat::getName(void) const
{
    return (this->_name);
}

int Bureaucrat::getGrade(void) const
{
    return (this->_grade);
}

std::ostream &operator<<(std::ostream &o, const Bureaucrat &obj)
{
    o << obj.getName() << ", bureaucrat grade " << obj.getGrade();
    return (o);
}

Bureaucrat::GradeTooHighException::GradeTooHighException()
{
    std::cout << "GradeTooHighException constructor called" << std::endl;
    std::cout << "--- Bureaucrat grade cannot be higher than 1! ---" << std::endl;
}

Bureaucrat::GradeTooLowException::GradeTooLowException()
{
    std::cout << "GradeTooLowException constructor called" << std::endl;
    std::cout << "--- Bureaucrat grade cannot be lower than 150! ---" << std::endl;
}

void Bureaucrat::incrementGrade(int value)
{
    if ((_grade - value) < 1)
        throw Bureaucrat::GradeTooHighException();
    _grade -= value;
}

void Bureaucrat::decrementGrade(int value)
{
    if ((_grade + value) > 150)
        throw Bureaucrat::GradeTooLowException();
    _grade += value;
}

void Bureaucrat::signForm(const Form &form)
{
    if (form.getSign())
        std::cout << getName() << " signed " << form.getName() << std::endl;
    else if (getGrade() > form.getGradeSign())
        std::cerr << getName() << " couldn't sign " << form.getName() << " because grade is too low" << std::endl;
}
