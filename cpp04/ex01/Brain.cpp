#include "Brain.hpp"

Brain::Brain()
{
    std::cout << "Brain created" << std::endl;
}

Brain::~Brain()
{
    std::cout << "Brain deleted" << std::endl;
}

Brain &Brain::operator=(Brain const &oth)
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

void Brain::setIdeas(const std::string& new_idea, int i)
{
	ideas[i] = new_idea;
}