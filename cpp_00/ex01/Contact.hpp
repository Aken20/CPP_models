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
        void set_first_name(std::string first_name);
        void set_last_name(std::string last_name);
        void set_nickname(std::string nickname);
        void set_contact(int i, std::string first_name, std::string last_name, std::string nickname, std::string Phone_number, std::string Darkest_secret);
        void printcontact(int index) const;
        std::string truncate(const std::string &str, size_t width) const;
};


#endif