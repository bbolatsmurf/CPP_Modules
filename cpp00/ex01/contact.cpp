#include "contact.hpp"

void Contact::setName(std::string name)
{
	this->_name = name;
}
std::string Contact::getName()
{
	return this->_name;
}

void Contact::setLastname(std::string surname)
{
	this->_surname = surname;
}
std::string Contact::getLastname()
{
	return this->_surname;
}

void Contact::setNickname(std::string nickname)
{
	this->_nickname = nickname;
}
std::string Contact::getNickname()
{
	return this->_nickname;
}

void Contact::setNumber(std::string phonenumber)
{
	this->_phonenumber = phonenumber;
}
std::string Contact::getNumber()
{
	return this->_phonenumber;
}

void Contact::setSecret(std::string darkestsecret)
{
	this->_darkestsecret = darkestsecret;
}
std::string Contact::getSecret()
{
	return this->_darkestsecret;
}
