#include "AAnimal.hpp"
AAnimal::AAnimal()
{
    this->type="AAnimal";
    std::cout<<"AAnimal:         Default Constructor"<<std::endl;
}
AAnimal::~AAnimal()
{
    std::cout<<"AAnimal:         Default Destructor"<<std::endl;
}
AAnimal::AAnimal(const AAnimal& oth)
{
    std::cout<<"AAnimal:         Copy Constructor"<<std::endl;
    *this=oth;
}
AAnimal &AAnimal::operator=(const AAnimal& oth)
{
    this->type=oth.getType();
    std::cout<<"AAnimal:         Copy assigment operator called"<<std::endl;
    return(*this);
}
void AAnimal::setType(const std::string &typeoth)
{
    this->type=typeoth;
}
std::string AAnimal::getType(void) const
{
    return(this->type);
}

void AAnimal::makeSound() const
{
    std::cout<<"AAnimal"<<std::endl;
}