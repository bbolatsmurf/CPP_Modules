#include <iostream>
#include <string>
#include <iomanip>
#include <fstream>

class Contact
{
    public:
        std::string Name;
        std::string Surname;
        std::string Nickname;
        std::string PhoneNumber;
        std::string DarkestSecret;
        bool flag;
};

class PhoneBook:Contact
{
    public:
        Contact book[8];
};

int is_all_numeric(std::string number)
{
    int i=0;
    while (number[i])
    {
        if(!(number[i] >= '0' && number[i] <= '9') && number[0] != '-' && number[0] != '+')
            return (0);
        i++;
    }
    return (1);
}

int main()
{
    int i = 0;
    int c = 0;
    int tmp = 0;
    PhoneBook phonebook;
    std::string array;
    while(42)
    {
        std::cout << "\033[1;35mPlease enter one of these commands: ADD - SEARCH - EXIT\033[0m" << std::endl;
        std::getline(std::cin, array);
        if(!array.compare("ADD"))
        {
            std::string name;
            std::string surname;
            std::string nickname;
            std::string phonenumber;
            std::string darkestsecert;
            std::cout << "please enter your name           👤: "; std::getline(std::cin, name);
            std::cout << "please enter your surname        👥: "; std::getline(std::cin, surname);
            std::cout << "please enter your nickname       👀: "; std::getline(std::cin, nickname);
            std::cout << "please enter your phone number   📞: "; std::getline(std::cin, phonenumber);
            std::cout << "please enter your darkest secret 😈: "; std::getline(std::cin, darkestsecert);
            if(!name.empty() && !surname.empty() && !nickname.empty() && !phonenumber.empty() && !darkestsecert.empty())
            {
                phonebook.book[i % 8].Name = name;
                phonebook.book[i % 8].Surname = surname;
                phonebook.book[i % 8].Nickname = nickname;
                phonebook.book[i % 8].PhoneNumber = phonenumber;
                phonebook.book[i % 8].DarkestSecret = darkestsecert;
                phonebook.book[i % 8].flag = 1;
                i++;
                c++;
            }
            else
                std::cout << "\033[31mWARNING >> Error: input is empty or incorrect enter!\033[0m"<< std::endl;
        }
        else if(!array.compare("SEARCH") && c && !array.empty())
        {
            std::cout << std::endl;
            for(int lim = 0; lim < 8 && !phonebook.book[lim].Name.empty();lim++){
                if(phonebook.book[lim].Name.length() > 10)
                    std::cout << lim << " " << std::right <<std::setw(9)<< phonebook.book[lim].Name.substr(0,9) << ".|";
                else
                    std::cout << lim <<  " " << std::right <<std::setw(10)<< phonebook.book[lim].Name << "|";
                if(phonebook.book[lim].Surname.length() > 10)
                    std::cout << std::right <<std::setw(9)<< phonebook.book[lim].Surname.substr(0,9) << ".|";
                else
                    std::cout << std::right <<std::setw(10)<< phonebook.book[lim].Surname << "|";
                if(phonebook.book[lim].Nickname.length() > 10)
                    std::cout << std::right <<std::setw(9)<< phonebook.book[lim].Nickname.substr(0,9) << ".|" << std::endl;
                else
                    std::cout << std::right <<std::setw(10)<< phonebook.book[lim].Nickname << "|" << std::endl;
            }std::cout << std::endl;
            control:
            std::cout << "please choose what you want to know 🔎"; std::getline(std::cin, array);
            if(is_all_numeric(array) && !array.empty())
            {
                tmp = std::stoi(array);
                if((tmp >= 0 && tmp < c) && !array.empty())
                {
                    std::cout << std::endl << "name           ➡️ " << phonebook.book[tmp].Name << std::endl;
                    std::cout << "surname        ➡️ " << phonebook.book[tmp].Surname << std::endl;
                    std::cout << "nickname       ➡️ " << phonebook.book[tmp].Nickname << std::endl;
                    std::cout << "phone number   ➡️  " << phonebook.book[tmp].PhoneNumber << std::endl;
                    std::cout << "darkest secret ➡️ " << phonebook.book[tmp].DarkestSecret << std::endl;
                }
                else
                {
                    std::cout << "ERROR!\n";
                    goto control;
                }
            }
            else
            {
                if(!array.empty())
                    std::cout << "Error: Please enter [0 - " << c - 1 << "]!"<< std::endl;
                goto control;
            }
        }
        else if(!array.compare("EXIT"))
        {
            std::cout << "\033[31mexiting...\033[0m"<< std::endl;
            exit(EXIT_SUCCESS);
        }
    }
}