#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(): AForm("RobotomyRequestForm", 25, 5)
{
};
RobotomyRequestForm::~RobotomyRequestForm()
{

};
RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm &copy): AForm(copy)
{
    // this->_is_signed = copy._is_signed;
};
RobotomyRequestForm &RobotomyRequestForm::operator=(RobotomyRequestForm &copy)
{
    return (copy);
};

void RobotomyRequestForm::execute(Bureaucrat const & executor) const
{

};

std::ostream &operator<<(std::ostream &os, RobotomyRequestForm &copy)
{
    os << copy.get_name() << " RobotomyRequestForm grade to signed " << copy.get_grade_to_sign() << ".";
    return os;
};
