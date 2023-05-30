#include "Brain.hpp"

Brain::Brain()
{
    std::cout<<"Brain:           Created"<<std::endl;
    
}
Brain::~Brain()
{
    std::cout<<"Brain:           Delete"<<std::endl;
}

Brain::Brain(const Brain& oth)
{
    std::cout<<"Brain:           Copy Constructor"<<std::endl;
    *this=oth;    
}

Brain &Brain::operator=(const Brain& oth)
{
	std::string *ideas = oth.getIdeas();
	for (int i = 0; i < 100; i++)
		this->ideas[i] = ideas[i];
	return (*this);
}

std::string *Brain::getIdeas() const
{
    return ((std::string *)ideas);
}