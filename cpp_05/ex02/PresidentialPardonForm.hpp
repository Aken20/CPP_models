#ifndef _PRESIDENTIALPARDONFORM_H_
# define _PRESIDENTIALPARDONFORM_H_

#include "AForm.hpp"

class PresidentialPardonForm : public AForm
{
    private:
        std::string _target;

    public:
        PresidentialPardonForm();
        PresidentialPardonForm(std::string target);
        PresidentialPardonForm(PresidentialPardonForm &copy);
        ~PresidentialPardonForm(void);
        PresidentialPardonForm &operator=(PresidentialPardonForm &copy);
        void execute(Bureaucrat const & executor) const;
};
std::ostream &operator<<(std::ostream &os, PresidentialPardonForm &copy);

#endif