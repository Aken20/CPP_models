#ifndef _INTERN_H_
# define _INTERN_H_

#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

class Intern
{
    Intern(void);
    ~Intern(void);
    Intern(Intern const &copy);
    Intern &operator=(Intern const &copy);
    AForm *makeForm(std::string form, std::string target);
};


#endif