#ifndef _SHRUBBERYCREATIONFORM_H_
# define _SHRUBBERYCREATIONFORM_H_

#include "AForm.hpp"
#include <fstream>

class ShrubberyCreationForm : public AForm
{
    private:
        std::string _target;

    public:
        ShrubberyCreationForm();
        ShrubberyCreationForm(std::string target);
        ShrubberyCreationForm(ShrubberyCreationForm &copy);
        ~ShrubberyCreationForm(void);
        ShrubberyCreationForm &operator=(ShrubberyCreationForm &copy);
        void execute(Bureaucrat const & executor) const ;
};
std::ostream &operator<<(std::ostream &os, ShrubberyCreationForm &copy);

#endif