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
    void Contact::printContactSummary(int index) const {
        std::string c_first_name;
        std::string c_last_name;
        std::string c_nickname;
        std::cout << std::right << index << std::setw(10) << " | "
                << truncate(first_name, 10) << std::setw(10) << " | "
                << truncate(last_name, 10) << std::setw(10) << " | "
                << truncate(nickname, 10) << std::setw(10) << std::endl;
        c_first_name = truncate(c_first_name, 10);
        c_last_name = truncate(c_last_name, 10);
        c_nickname = truncate(c_nickname, 10);
        while (c_first_name.length() || c_last_name.length() || c_nickname.length())
        {
            std::cout << std::right << index << std::setw(10) << " | "
                    << c_first_name << std::setw(10) << " | "
                    << c_last_name << std::setw(10) << " | "
                    << c_nickname << std::setw(10) << std::endl;
            c_first_name = truncate(c_first_name, 10);
            c_last_name = truncate(c_last_name, 10);
            c_nickname = truncate(c_nickname, 10);
        }
    }

    std::string Contact::truncate(const std::string &str, size_t width) const {
        if (str.length() > width) {
            return str.substr(width - 1, width - 1) + ".";
        } else {
            return "";
        }
    }