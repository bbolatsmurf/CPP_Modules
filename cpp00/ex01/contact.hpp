#include <iostream>
#include <string.h>

class Contact
{
    private:
        std::string _name;
        std::string _surname;
        std::string _nickname;
        std::string _phonenumber;
        std::string _darkestsecret;
        bool flag;
    public:
        void setName(std::string name);
		std::string getName();
		void setLastname(std::string surname);
		std::string getLastname();
		void setNickname(std::string nickname);
		std::string getNickname();
		void setNumber(std::string phonenumber);
		std::string getNumber();
		void setSecret(std::string darkestsecret);
		std::string getSecret();
};