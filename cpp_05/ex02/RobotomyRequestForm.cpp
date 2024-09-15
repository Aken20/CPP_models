#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(): AForm("RobotomyRequestForm", 72, 45)
{
    std::cout << "RobotomyRequestForm: Default constructor called" << std::endl;
    this->_target = "Default target";
};

RobotomyRequestForm::RobotomyRequestForm(std::string target): AForm("RobotomyRequestForm", 72, 45), _target(target)
{
    std::cout << "RobotomyRequestForm: constructor called" << std::endl;
};

RobotomyRequestForm::~RobotomyRequestForm()
{
    std::cout << "RobotomyRequestForm: Default distructor called" << std::endl;
};
RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm &copy): AForm(copy), _target(copy._target)
{
    std::cout << "RobotomyRequestForm: copy constructor called" << std::endl;
};
RobotomyRequestForm &RobotomyRequestForm::operator=(RobotomyRequestForm &copy)
{
    this->_target = copy._target;
    return (*this);
};

void RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
    std::cout << executor.get_name() << ": executed " << this->get_name() << std::endl;
    if (!this->_target.empty())
    {
        std::cout << "*  drilling noises *" << std::endl;
        if (std::rand() % 2)
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

std::string RobotomyRequestForm::get_target(void)
{
    return this->_target;
};
void RobotomyRequestForm::set_target(std::string target)
{
    if (target.empty())
        return ;
    this->_target = target;
};
