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
    // this->_is_signed = copy._is_signed;
};
PresidentialPardonForm &PresidentialPardonForm::operator=(PresidentialPardonForm &copy)
{
    return (copy);
};

void PresidentialPardonForm::execute(Bureaucrat const & executor) const
{

};

std::ostream &operator<<(std::ostream &os, PresidentialPardonForm &copy)
{
    os << copy.get_name() << " PresidentialPardonForm grade to signed " << copy.get_grade_to_sign() << ".";
    return os;
};

