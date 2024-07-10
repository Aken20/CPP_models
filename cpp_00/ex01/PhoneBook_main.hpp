#ifndef PHONEBOOK_MAIN_HPP
# define PHONEBOOK_MAIN_HPP

# include <iostream>
# include <cstdlib>
# include "Contact.hpp"
# include "PhoneBook.hpp"

int    add_contact(PhoneBook *phonebook, int i);
int    search_contact(PhoneBook *phonebook);
int    print_instructions();

#endif