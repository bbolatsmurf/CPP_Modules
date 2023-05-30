#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

#include "iostream"

class WrongAnimal
{
    protected:
        std::string type;
    public:
        WrongAnimal();
        WrongAnimal(std::string type);
        WrongAnimal(const WrongAnimal& _oth);
        WrongAnimal &operator=(const WrongAnimal& _oth);
        virtual ~WrongAnimal(); //bunlar virtual olması gerekyor
        std::string getType() const;
        void makeSound() const;
        
};

class WrongCat : public WrongAnimal
{
    public:
        WrongCat();
        WrongCat(std::string type);
        WrongCat(const WrongCat& _oth);
        WrongCat &operator=(const WrongCat& _oth);
        ~WrongCat();
        //std::string getType() const;
        void makeSound() const;
};
class WrongDog : public WrongAnimal
{
    public:
        WrongDog();
        WrongDog(std::string type);
        WrongDog(const WrongDog& _oth);
        WrongDog &operator=(const WrongDog& _oth);
        ~WrongDog();
        //std::string getType() const;
        void makeSound() const;
};

#endif