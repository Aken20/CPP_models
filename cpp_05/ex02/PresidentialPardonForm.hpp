#ifndef _PRESIDENTIALPARDONFORM_H_
# define _PRESIDENTIALPARDONFORM_H_

#include "AForm.hpp"

class PresidentialPardonForm : public AForm
{
    public:
        PresidentialPardonForm();
        PresidentialPardonForm(std::string const Name, int Grade_to_sign, int Grade_to_execute);
        PresidentialPardonForm(PresidentialPardonForm &copy);
        ~PresidentialPardonForm(void);
        PresidentialPardonForm &operator=(PresidentialPardonForm &copy);
        void execute(Bureaucrat const & executor) const;
};
std::ostream &operator<<(std::ostream &os, PresidentialPardonForm &copy);

#endif