#include "PhoneBook_main.hpp"

int    add_contact(PhoneBook *phonebook, int id)
{
    std::string first_name;
    std::string last_name;
    std::string nickname;
    std::string Phone_number;
    std::string Darkest_secret;

    std::cout << "Enter Contact first name: ";
    std::getline(std::cin, first_name);
    if (!std::cin)
    {
        std::cout << "\nInvalid Input\n";
        exit(1);
    }
    std::cout << "Enter Contact last name: ";
    std::getline(std::cin, last_name);
    if (!std::cin)
    {
        std::cout << "\nInvalid Input\n";
        exit(1);
    }
    std::cout << "Enter Contact nickname: ";
    std::getline(std::cin, nickname);
    if (!std::cin)
    {
        std::cout << "\nInvalid Input\n";
        exit(1);
    }
    std::cout << "Enter Contact Phone number: ";
    std::getline(std::cin, Phone_number);
    if (!std::cin)
    {
        std::cout << "\nInvalid Input\n";
        exit(1);
    }
    std::cout << "Enter Contact Darkest secret: ";
    std::getline(std::cin, Darkest_secret);
    if (!std::cin)
    {
        std::cout << "\nInvalid Input\n";
        exit(1);
    }
    phonebook->add_contact(id, first_name, last_name, nickname, Phone_number, Darkest_secret);
    return 0;
}

int    search_contact(PhoneBook *phonebook)
{
    phonebook->search_contact();
    return (0);
}

int   ft_exit(PhoneBook *phonebook)
{
    phonebook->~PhoneBook();
    return (0);
}

int    print_instructions(void)
{
    std::cout << "Welcome to our phonebook service" << std::endl;
    std::cout << "to enteract with the program please use the following commands:" << std::endl;
    std::cout << "1. ADD: to add a new contact." << std::endl;
    std::cout << "2. SEARCH: to search for an exicting contact." << std::endl;
    std::cout << "3. EXIT: to exit." << std::endl;
    return 0;
}

int main()
{
    std::string command;
    int index = 0;
    PhoneBook   test;

    std::cout << "Welcome to our phonebook service" << std::endl;
    std::cout << "to enteract with the program please use the following commands" << std::endl;
    print_instructions();
    while (1)
    {
        std::cout << "Enter a command: ";
        std::getline(std::cin, command);
        if (!std::cin)
        {
            if (!std::cin)
                std::cout << "\n";
            std::cout << "Invalid Input" << std::endl;
            exit(1);
        }
        if (command == "ADD")
        {
            if (index > 7)
                index = 0;
            add_contact(&test, index++);
        }
        else if (command == "SEARCH")
            search_contact(&test);
        else if (command == "EXIT")
        {
            ft_exit(&test);
            return (0);
        }
        else
            std::cout << "Invalid command" << std::endl;
    }
    return (0);
}