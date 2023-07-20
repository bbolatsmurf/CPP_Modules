#ifndef AFORM_HPP
#define AFORM_HPP

#include "Bureaucrat.hpp"

class AForm // form class ının  abstract class hali.
{
private:
    const std::string name;
    bool sign;
    const int gradeSign;
    const int gradeExecute;

public:
    AForm();
    AForm(std::string _name, int _gradeSign, int _gradeExecute);
    AForm(const AForm &tmp);
    AForm &operator=(const AForm &tmp);
    virtual ~AForm(); // neden virtual? subclassların destructorları daha düzgün çalışması için.

    std::string getName(void) const;
    bool getSign(void) const;
    int getGradeSign(void) const;
    int getGradeExecute(void) const;

    void beSigned(Bureaucrat &obj);
    virtual void execute(Bureaucrat const &executor) const = 0; // pure virtual func. amacı subclassların execute()'ı yeniden tanımlatıp ayrı işlevler yüklemesidir.

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
    class NotEnoughToSign : public std::exception
    {
    public:
        NotEnoughToSign();
    };
    class NotEnoughToExecute : public std::exception
    {
    public:
        NotEnoughToExecute(); // !
    };
    class NotSignedException : public std::exception
    {
    public:
        NotSignedException();
    };
    class FileCreationException : public std::exception
    {
    public:
        FileCreationException();
    };
};
std::ostream &operator<<(std::ostream &o, const AForm &obj);

#endif