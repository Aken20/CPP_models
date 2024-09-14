#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(): AForm("ShrubberyCreationForm", 145, 137)
{
    this->_target = "Default target";
};

ShrubberyCreationForm::ShrubberyCreationForm(std::string target): AForm("ShrubberyCreationForm", 145, 137), _target(target)
{

};

ShrubberyCreationForm::~ShrubberyCreationForm()
{

};
ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm &copy): AForm(copy)
{
    // this->_is_signed = copy._is_signed;
};
ShrubberyCreationForm &ShrubberyCreationForm::operator=(ShrubberyCreationForm &copy)
{
    return (copy);
};

void ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{

};

std::ostream &operator<<(std::ostream &os, ShrubberyCreationForm &copy)
{
    os << copy.get_name() << " ShrubberyCreationForm grade to signed " << copy.get_grade_to_sign() << ".";
    return os;
};
