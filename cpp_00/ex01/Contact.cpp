#include "PhoneBook_main.hpp"

    Contact::Contact()
    {

    }
    Contact::~Contact()
    {

    }
    void Contact::set_first_name(std::string first_name)
    {
        this->first_name = first_name;
    }
    void Contact::set_last_name(std::string last_name)
    {
        this->last_name = last_name;
    }
    void Contact::set_nickname(std::string nickname)
    {
        this->nickname = nickname;
    }
    void Contact::set_contact(int i, std::string first_name, std::string last_name, std::string nickname, std::string Phone_number, std::string Darkest_secret)
    {
        this->id = i;
        this->first_name = first_name;
        this->last_name = last_name;
        this->nickname = nickname;
        this->Phone_number = Phone_number;
        this->Darkest_secret = Darkest_secret;
    }
    void Contact::printcontact(int index) const {
        std::cout << std::right << "     " << index << "    |"
                << truncate(first_name, 10) << "|"
                << truncate(last_name, 10) << "|"
                << truncate(nickname, 10) << std::endl;
    }

    std::string Contact::truncate(const std::string &str, size_t width) const {
        int         i = 0;
        std::string n_str;

        if (str.length() > width) {
            return str.substr(0, width - 1) + ".";
        } else {
            i = width - str.length();
            n_str = str;
            while (i-- > 0)
                n_str = n_str + ' ';
            return n_str;
        }
    }