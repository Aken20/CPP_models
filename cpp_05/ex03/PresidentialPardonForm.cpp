#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(): AForm("PresidentialPardonForm", 25, 5)
{
    std::cout << "PresidentialPardonForm: Default constructor called" << std::endl;
    this->_target = "Default target";
};

PresidentialPardonForm::PresidentialPardonForm(std::string target): AForm("PresidentialPardonForm", 25, 5), _target(target)
{
    std::cout << "PresidentialPardonForm: constructor called" << std::endl;
};

PresidentialPardonForm::~PresidentialPardonForm()
{
    std::cout << "PresidentialPardonForm: Default distructor called" << std::endl;
};
PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm &copy): AForm(copy), _target(copy._target)
{
    std::cout << "PresidentialPardonForm: copy constructor called" << std::endl;
};
PresidentialPardonForm &PresidentialPardonForm::operator=(PresidentialPardonForm &copy)
{
    this->_target = copy._target;
    return (*this);
};

void PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
    std::cout << executor.get_name() << ": executed " << this->get_name() << std::endl;
    if (!this->_target.empty())
    {
        std::cout << this->_target << " has been pardoned by Zaphod Beeblebrox" << std::endl;
    }
};

std::ostream &operator<<(std::ostream &os, PresidentialPardonForm &copy)
{
    os << copy.get_name() << " grade to sign is " << copy.get_grade_to_sign() << " Form grade to execute is " << copy.get_grade_to_execute();
    if (copy.get_is_signed())
        os << " and it's signed.";
    else
        os << " and it's not signed.";
    return os;
};

std::string PresidentialPardonForm::get_target(void)
{
    return this->_target;
};
void PresidentialPardonForm::set_target(std::string target)
{
    if (target.empty())
        return ;
    this->_target = target;
};
