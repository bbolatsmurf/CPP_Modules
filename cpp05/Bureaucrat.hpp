#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iostream>

class Bureaucrat
{
    private:
        std::string _name;
        int _grade;
    public:
        Bureaucrat();
        Bureaucrat(const Bureaucrat& tmp);
        Bureaucrat& operator=(const Bureaucrat& tmp);
        ~Bureaucrat();

        std::string getName(void) const;
        int getGrade(void) const;
        void incrementGrade(int value);
        void decrementGrade(int value);
        class GradeTooHighException
        {
            public:
                GradeTooHighException(); //mesaj yazdir.
                ~GradeTooHighException();
        };
        class GradeTooLowException
        {
            public:
                GradeTooLowException(); //mesaj yazdir.
                ~GradeTooLowException();
        };
};
std::ostream &operator<<(std::ostream &o, const Bureaucrat &obj);

#endif
