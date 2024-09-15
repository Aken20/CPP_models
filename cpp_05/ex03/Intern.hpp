#ifndef _INTERN_H_
# define _INTERN_H_

#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

class Intern
{
    public:
        Intern(void);
        ~Intern(void);
        Intern(Intern const&);
        Intern &operator=(Intern const &);
        AForm *makeForm(std::string form, std::string target);
        AForm *make_robot_Form(std::string target);
        AForm *make_shrubbery_Form(std::string target);
        AForm *make_Pardon_Form(std::string target);
};


#endif