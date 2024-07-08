#include "PhoneBook_main.hpp"

PhoneBook::PhoneBook()
{
    
}
PhoneBook::~PhoneBook()
{

}
void PhoneBook::add_contact(int i, std::string first_name, std::string last_name, std::string nickname, std::string Phone_number, std::string Darkest_secret)
{
    this->contacts[i].set_contact(i, first_name, last_name, nickname, Phone_number, Darkest_secret);
}
void PhoneBook::search_contact()
{
    int i;
    std::string sy;

    i = 0;
    std::cout << "  index  |first name| last name|nickname  " << std::endl;
    {
        while (i < 8)
        {
            this->contacts[i].printf_contact(i);
            i++;
        }
    }
    std::cout << "Enter the index of the contact you want to see: ";
    std::getline(std::cin, sy);
    i = std::atoi(sy.c_str());
    if (i >= 0 && i < 8)
        this->contacts[i].printf_contact(i);
    else
        std::cout << "Invalid input";
}