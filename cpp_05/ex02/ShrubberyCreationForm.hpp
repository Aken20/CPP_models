#ifndef _SHRUBBERYCREATIONFORM_H_
# define _SHRUBBERYCREATIONFORM_H_

#include "AForm.hpp"

class ShrubberyCreationForm : public AForm
{
    public:
        ShrubberyCreationForm();
        ShrubberyCreationForm(std::string const Name, int Grade_to_sign, int Grade_to_execute);
        ShrubberyCreationForm(ShrubberyCreationForm &copy);
        ~ShrubberyCreationForm(void);
        ShrubberyCreationForm &operator=(ShrubberyCreationForm &copy);
        void execute(Bureaucrat const & executor) const;
};
std::ostream &operator<<(std::ostream &os, ShrubberyCreationForm &copy);

#endif