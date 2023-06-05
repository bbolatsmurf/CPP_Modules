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

        std::string getName(void);
        int getGrade(void);
        //void GradetooHighException(std::string grade); böyle de olabilir!!!
        //void GradeTooLowException();
        void incrementGrade(int value); // try-catch burada!
        void decrementGrade(int value); // try-catch burada!
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

#endif
