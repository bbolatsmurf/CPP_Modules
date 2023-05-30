#include "Cat.hpp"

Cat::Cat()
{
    this->type="Cat";
    std::cout<<"Cat:             Default Constructor"<<std::endl;
    this->brain = new Brain();
}
Cat::~Cat()
{
    std::cout<<"Cat:             Default Destructor"<<std::endl;
    delete(this->brain);
}
Cat::Cat(const Cat& oth)
{
    std::cout<<"Cat:             Copy Constructor"<<std::endl;
    *this=oth;
}

Cat &Cat::operator=(const Cat& oth)
{
    this->type=oth.getType();
    std::cout<<"Cat:             Copy Assigment Operator "<<std::endl;
    this->brain=new Brain(*oth.brain);
    return(*this);
}

void Cat::makeSound(void) const
{
    std::cout<<"MİYAV MİYAV MİYAV"<<std::endl;
}