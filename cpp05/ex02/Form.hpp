#ifndef FORM_HPP
# define FORM_HPP

#include "Bureaucrat.hpp"

class Form
{
    private:
        const std::string name;
        bool sign;
        const int gradeSign;
        const int gradeExecute;
    public:
        Form();
        Form(std::string _name, int _gradeSign, int _gradeExecute);
        Form(const Form& tmp);
        Form& operator=(const Form& tmp);
        ~Form();

        std::string getName(void) const;
        bool getSign(void) const;
        int getGradeSign(void) const;
        int getGradeExecute(void) const;

        void beSigned(Bureaucrat &obj);

        class GradeTooHighException : public std::exception
        {
            public:
                GradeTooHighException();
        };
        class GradeTooLowException : public std::exception
        {
            public:
                GradeTooLowException();
        };
};
std::ostream &operator<<(std::ostream &o, const Form &obj);

#endif