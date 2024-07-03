#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include "PhoneBook_main.hpp"

class PhoneBook
{
    private:
        Contact contacts[8];
    public:
        PhoneBook();
        ~PhoneBook();
        void add_contact(int i, std::string first_name, std::string last_name, std::string nickname, std::string Phone_number, std::string Darkest_secret);
        void search_contact();
};

#endif