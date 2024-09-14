#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(): AForm("PresidentialPardonForm", 25, 5)
{
    this->_target = "Default target";
};

PresidentialPardonForm::PresidentialPardonForm(std::string target): AForm("PresidentialPardonForm", 25, 5), _target(target)
{

};

PresidentialPardonForm::~PresidentialPardonForm()
{

};
PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm &copy): AForm(copy)
{
};
PresidentialPardonForm &PresidentialPardonForm::operator=(PresidentialPardonForm &copy)
{
    return (copy);
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
