#include "PhoneBook_main.hpp"

int    add_contact(PhoneBook *phonebook)
{
    int id;
    std::string first_name;
    std::string last_name;
    std::string nickname;
    std::string Phone_number;
    std::string Darkest_secret;

    std::cout << "Enter Contact id: ";
    std::cin >> id;
    std::cout << "Enter Contact first name: ";
    std::getline(std::cin, first_name);
    std::cout << "Enter Contact last name: ";
    std::getline(std::cin, last_name);
    std::cout << "Enter Contact nickname: ";
    std::getline(std::cin, nickname);
    std::cout << "Enter Contact Phone number: ";
    std::getline(std::cin, Phone_number);
    std::cout << "Enter Contact Darkest secret: ";
    std::getline(std::cin, Darkest_secret);
    phonebook->add_contact(id, first_name, last_name, nickname, Phone_number, Darkest_secret);
}

int    search_contact(PhoneBook *phonebook)
{

}

int    print_contact(PhoneBook *phonebook)
{

}

int   ft_exit(PhoneBook *phonebook)
{
    exit(0);
}

int    print_instructions(void)
{
    std::cout << "Welcome to our phonebook service" << std::endl;
    std::cout << "to enteract with the program please use the following commands" << std::endl;
    std::cout << "1. ADD: to add a new contact." << std::endl;
    std::cout << "2. SEARCH: to search for an exicting contact" << std::endl;
    std::cout << "3. EXIT: to exit." << std::endl;
    std::cout << "4. HELP: to print the instructions." << std::endl;
}

int main()
{
    std::string command;
    PhoneBook   test;

    std::cout << "Welcome to our phonebook service" << std::endl;
    std::cout << "to enteract with the program please use the following commands" << std::endl;
    print_instructions();
    while (1)
    {
        std::cout << "Enter a command: ";
        std::getline(std::cin, command);
        if (command == "ADD")
            add_contact(&test);
        else if (command == "SEARCH")
            search_contact(&test);
        else if (command == "EXIT")
            ft_exit(&test);
        else if (command == "HELP")
            print_instructions();
        else
            std::cout << "Invalid command" << std::endl;
    }
}