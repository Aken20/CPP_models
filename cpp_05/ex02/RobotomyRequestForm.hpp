#ifndef _ROBOTOMYREQUESTFORM_H_
# define _ROBOTOMYREQUESTFORM_H_

#include "AForm.hpp"

class RobotomyRequestForm : public AForm
{
    public:
        RobotomyRequestForm();
        RobotomyRequestForm(std::string const Name, int Grade_to_sign, int Grade_to_execute);
        RobotomyRequestForm(RobotomyRequestForm &copy);
        ~RobotomyRequestForm(void);
        RobotomyRequestForm &operator=(RobotomyRequestForm &copy);
        void execute(Bureaucrat const & executor) const;
};
std::ostream &operator<<(std::ostream &os, RobotomyRequestForm &copy);

#endif