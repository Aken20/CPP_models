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
    std::cout << executor.get_name() << ": executed " << this->get_name() << std::endl;
    if (!this->_target.empty())
    {
        std::cout << "*  drilling noises *" << std::endl;
        if (rand() % 2)
            std::cout << this->_target << " has been robotomized" << std::endl;
        else
            std::cout << "the robotomy failed" << std::endl;
    }
};

std::ostream &operator<<(std::ostream &os, RobotomyRequestForm &copy)
{
    os << copy.get_name() << " grade to sign is " << copy.get_grade_to_sign() << " Form grade to execute is " << copy.get_grade_to_execute();
    if (copy.get_is_signed())
        os << " and it's signed.";
    else
        os << " and it's not signed.";
    return os;
};