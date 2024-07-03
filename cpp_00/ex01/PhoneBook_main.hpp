#ifndef PHONEBOOK_MAIN_HPP
# define PHONEBOOK_MAIN_HPP

# include <iostream>
# include <string>
# include "Contact.hpp"
# include "PhoneBook.hpp"

int    add_contact(PhoneBook *phonebook);
int    search_contact(PhoneBook *phonebook);
int    print_contact(PhoneBook *phonebook);
int    print_instructions();

#endif