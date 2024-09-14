#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(): AForm("RobotomyRequestForm", 72, 45)
{
    this->_target = "Default target";
};

RobotomyRequestForm::RobotomyRequestForm(std::string target): AForm("RobotomyRequestForm", 72, 45), _target(target)
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
