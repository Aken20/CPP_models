# ifndef CONTACT_HPP
# define CONTACT_HPP

# include "PhoneBook_main.hpp"

class Contact
{
    private:
        int id;
        std::string first_name;
        std::string last_name;
        std::string nickname;
        std::string Phone_number;
        std::string Darkest_secret;
    public:
        Contact();
        ~Contact();
        int get_id();
        std::string set_first_name(std::string first_name);
        std::string set_last_name(std::string last_name);
        std::string set_nickname(std::string nickname);
        std::string set_Phone_number(std::string Phone_number);
        std::string set_Darkest_secret(std::string Darkest_secret);
        void set_contact(int i, std::string first_name, std::string last_name, std::string nickname, std::string Phone_number, std::string Darkest_secret);
        void printf_contact(int i);
        int set_id(int id);
        std::string get_first_name();
        std::string get_last_name();
        std::string get_nickname();
        std::string get_Phone_number();
        std::string get_Darkest_secret();
};


#endif