#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(): AForm("ShrubberyCreationForm", 145, 137)
{
    std::cout << "ShrubberyCreationForm: Default constructor called" << std::endl;
    this->_target = "Default target";
};

ShrubberyCreationForm::ShrubberyCreationForm(std::string target): AForm("ShrubberyCreationForm", 145, 137), _target(target)
{
    std::cout << "ShrubberyCreationForm: constructor called" << std::endl;
};

ShrubberyCreationForm::~ShrubberyCreationForm()
{
    std::cout << "ShrubberyCreationForm: Default distructor called" << std::endl;
};
ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm &copy): AForm(copy), _target(copy._target)
{
    std::cout << "ShrubberyCreationForm: copy constructor called" << std::endl;
};
ShrubberyCreationForm &ShrubberyCreationForm::operator=(ShrubberyCreationForm &copy)
{
    this->_target = copy._target;
    return (*this);
};

void ShrubberyCreationForm::execute(Bureaucrat const &executor) const
{
    std::cout << executor.get_name() << ": executed " << this->get_name() << std::endl;
    if (!this->_target.empty())
    {
        std::ofstream file(this->_target);
        if (!file)
        {
            std::cout << "ShrubberyCreationForm: Faild to open target '" << this->_target << "'." << std::endl;
            return ;
        }
        file << "                     .o00o\n                   o000000oo\n                  00000000000o\n                 00000000000000\n              oooooo  00000000  o88o\n           ooOOOOOOOoo  ```''  888888\n         OOOOOOOOOOOO'.qQQQQq. `8888'\n        oOOOOOOOOOO'.QQQQQQQQQQ/.88'\n        OOOOOOOOOO'.QQQQQQQQQQ/ /q\n         OOOOOOOOO QQQQQQQQQQ/ /QQ\n           OOOOOOOOO `QQQQQQ/ /QQ'\n             OO:F_P:O `QQQ/  /Q'\n                \\. \\ |  // |\n                d\\ \\\\|_////\n                qP| \\ _' `|Ob\n                   \\  / \\  \\Op\n                   |  | O| |\n           _       /\\. \\_/ /\n            `---__/|_\\   //|  __\n                  `-'  `-'`-'-'" << std::endl;
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

std::string ShrubberyCreationForm::get_target(void)
{
    return this->_target;
};
void ShrubberyCreationForm::set_target(std::string target)
{
    if (target.empty())
        return ;
    this->_target = target;
};