#include "RobotomyRequestForm.hpp"
#include "Bureaucrat.hpp"

RobotomyRequestForm::RobotomyRequestForm(){
    // std::cout << "RobotomyRequest default constructor called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(std:: string target) : AForm(target, 72, 45)
{
    std::cout << "RobotomyRequest parameter constructor called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& robo) : AForm(robo)
{
    std::cout << "RobotomyRequest copy constructor called" << std::endl;
}

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm& robo)
{
    if(this != &robo)
        AForm::operator=(robo);
    std::cout << "RobotomyRequest copy assignment opearator called" << std::endl;
    return *this;
}

RobotomyRequestForm::~RobotomyRequestForm(){
    // std::cout << "RobotomyRequest destructor called" << std::endl;
}

void RobotomyRequestForm::execute(Bureaucrat const &executor) const
{
    if(executor.getGrade() > getGradeExecute())
        throw AForm::NotEnoughToExecute();
    else if(!getSign())
        throw AForm::NotEnoughToSign();
    srand(time(0));
    int random_number = rand() % 101; // max 101 e kadar sayı gelebilir. gelebilcek max sayı = 100.
    if(random_number <= 50)
        std::cout << getName() << " has been robotomized successfully 50% of the time : " << random_number << std::endl;
    else if(random_number > 50)
        std::cout << getName() << " robotomization process has been failed! : " << random_number << std::endl;
}

AForm* RobotomyRequestForm::clone(std::string target)
{
	return(new RobotomyRequestForm(target));
}