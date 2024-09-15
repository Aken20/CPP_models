#ifndef _ROBOTOMYREQUESTFORM_H_
# define _ROBOTOMYREQUESTFORM_H_

#include "AForm.hpp"
#include <fstream>

class RobotomyRequestForm : public AForm
{
    private:
        std::string _target;

    public:
        RobotomyRequestForm();
        RobotomyRequestForm(std::string target);
        RobotomyRequestForm(RobotomyRequestForm &copy);
        ~RobotomyRequestForm(void);
        RobotomyRequestForm &operator=(RobotomyRequestForm &copy);
        void execute(Bureaucrat const & executor) const ;
        std::string get_target(void);
        void set_target(std::string target);
};
std::ostream &operator<<(std::ostream &os, RobotomyRequestForm &copy);

#endif