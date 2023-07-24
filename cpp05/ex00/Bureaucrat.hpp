#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>

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

    class GradeTooHighException : public std::exception
    {
    public:
        const char * what() const throw();
    };
    class GradeTooLowException : public std::exception
    {
    public:
        const char * what() const throw();
    };
};
std::ostream &operator<<(std::ostream &o, const Bureaucrat &obj);

#endif
