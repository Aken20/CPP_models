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

void ShrubberyCreationForm::execute(Bureaucrat const &executor) const
{
    std::cout << executor.get_name() << ": executed " << this->get_name() << std::endl;
    if (!this->_target.empty())
    {
        std::ofstream file(this->_target);
        file << "                     .o00o\n                   o000000oo\n                  00000000000o\n                 00000000000000\n              oooooo  00000000  o88o\n           ooOOOOOOOoo  ```''  888888\n         OOOOOOOOOOOO'.qQQQQq. `8888'\n        oOOOOOOOOOO'.QQQQQQQQQQ/.88'\n        OOOOOOOOOO'.QQQQQQQQQQ/ /q\n         OOOOOOOOO QQQQQQQQQQ/ /QQ\n           OOOOOOOOO `QQQQQQ/ /QQ'\n             OO:F_P:O `QQQ/  /Q'\n                \\. \\ |  // |\n                d\\ \\\\|_////\n                qP| \\ _' `|Ob\n                   \\  / \\  \\Op\n                   |  | O| |\n           _       /\\. \\_/ /\\n            `---__/|_\\   //|  __\n                  `-'  `-'`-'-'" << std::endl;
    }
};

std::ostream &operator<<(std::ostream &os, ShrubberyCreationForm &copy)
{
    os << copy.get_name() << " grade to sign is " << copy.get_grade_to_sign() << " Form grade to execute is " << copy.get_grade_to_execute();
    if (copy.get_is_signed())
        os << " and it's signed.";
    else
        os << " and it's not signed.";
    return os;
};
