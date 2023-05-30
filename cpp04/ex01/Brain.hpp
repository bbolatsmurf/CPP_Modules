#ifndef  BRAIN_HPP
# define BRAIN_HPP

#include "iostream"
class Brain
{
    protected:
        std::string ideas[100];
    
    public:
        Brain(); //cons
        Brain(const Brain& oth); //copy cons
        Brain &operator=(const Brain& _oth); //op. overloading
        virtual ~Brain();

        std::string *getIdeas() const;
        void setIdeas(const std::string& new_idea, int i);
};

#endif