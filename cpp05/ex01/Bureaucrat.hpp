#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <exception>

class Form;
class Bureaucrat
{
private:
    const std::string _name;
    int _grade;

public:
    Bureaucrat();
    Bureaucrat(std::string name, int grade);
    Bureaucrat(const Bureaucrat &tmp);
    Bureaucrat &operator=(const Bureaucrat &tmp);
    ~Bureaucrat();

    std::string getName(void) const;
    int getGrade(void) const;
    void incrementGrade(int value);
    void decrementGrade(int value);
    void signForm(const Form &form);
    class GradeTooHighException : public std::exception
    {
    public:
        GradeTooHighException();
        //~GradeTooHighException();
    };
    class GradeTooLowException : public std::exception
    {
    public:
        GradeTooLowException();
        //~GradeTooLowException();
    };
};
std::ostream &operator<<(std::ostream &o, const Bureaucrat &obj);

#endif
