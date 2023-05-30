#include "Dog.hpp"

Dog::Dog()
{
    this->type="Dog";
    std::cout<<"Dog:             Dog for Default Constructor"<<std::endl;
    this->brain=new Brain();
}
Dog::~Dog()
{
    std::cout<<"Dog:             Dog for Default Destructor"<<std::endl;
    delete(this->brain);
}
Dog::Dog(const Dog& oth)
{
    std::cout<<"Dog:             Dog for Copy Constructor"<<std::endl;
    *this=oth;
}
Dog &Dog::operator=(const Dog& oth)
{
    this->type=oth.getType();
    std::cout<<"Dog:             Dog for Copy Assigment Operator Called"<<std::endl;
    this->brain=new Brain(*oth.brain);
    return(*this);
}
void Dog::makeSound() const
{
    std::cout<<"HAV HAV HAV"<<std::endl;
}