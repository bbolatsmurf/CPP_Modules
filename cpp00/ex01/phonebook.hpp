#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <iostream>
#include "contact.hpp"
#include <string>
#include <iomanip>
#include <cstdlib>
#include <cstdio>

class PhoneBook
{
    public:
        Contact book[8];
        int index;
        int number;
        void add(PhoneBook *list);
        void search(PhoneBook *list);
};

#endif