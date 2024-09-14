#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(): AForm("ShrubberyCreationForm", 25, 5)
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
