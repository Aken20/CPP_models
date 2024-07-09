#include "PhoneBook_main.hpp"

    Contact::Contact()
    {

    }
    Contact::~Contact()
    {

    }
    int Contact::set_id(int id)
    {
        this->id = id;
        return (this->id);
    }
    std::string Contact::set_first_name(std::string first_name)
    {
        this->first_name = first_name;
        return (this->first_name);
    }
    std::string Contact::set_last_name(std::string last_name)
    {
        this->last_name = last_name;
        return (this->last_name);
    }
    std::string Contact::set_nickname(std::string nickname)
    {
        this->nickname = nickname;
        return (this->nickname);
    }
    std::string Contact::set_Phone_number(std::string Phone_number)
    {
        this->Phone_number = Phone_number;
        return (this->Phone_number);
    }
    std::string Contact::set_Darkest_secret(std::string Darkest_secret)
    {
        this->Darkest_secret = Darkest_secret;
        return (this->Darkest_secret);
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
    void Contact::printf_contact(int i)
    {
        std::cout << "     " << i << "    | " << this->first_name << " | " << this->last_name << " | " << this->nickname << " | " << this->Phone_number << " | " << this->Darkest_secret<< std::endl;
    }
    int Contact::get_id()
    {
        return (this->id);
    }
    std::string Contact::get_first_name()
    {
        return (this->first_name);
    }
    std::string Contact::get_last_name()
    {
        return (this->last_name);
    }
    std::string Contact::get_nickname()
    {
        return (this->nickname);
    }
    std::string Contact::get_Phone_number()
    {
        return (this->Phone_number);
    }
    std::string Contact::get_Darkest_secret()
    {
        return (this->Darkest_secret);
    }