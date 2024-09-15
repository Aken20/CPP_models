#include "Intern.hpp"

Intern::Intern(void)
{
    std::cout << "Intern: Default constructor called" << std::endl;
};
Intern::~Intern(void)
{
    std::cout << "Intern: Default distructor called" << std::endl;
};
Intern::Intern(Intern const &)
{
    std::cout << "Intern: Copy constructor called" << std::endl;
};

Intern &Intern::operator=(Intern const &)
{
    return *this;
};

AForm *Intern::make_robot_Form(std::string target)
{
    AForm *a;
    a = new RobotomyRequestForm(target);
    return a;
};
AForm *Intern::make_shrubbery_Form(std::string target)
{
    AForm *a;
    a = new ShrubberyCreationForm(target);
    return a;
};
AForm *Intern::make_Pardon_Form(std::string target)
{
    AForm *a;
    a = new PresidentialPardonForm(target);
    return a;
};


AForm *Intern::makeForm(std::string form, std::string target)
{
    int i = 0;
    std::cout << "Intern: makeForm called" << std::endl;
    AForm *(Intern::*funcs[3])(std::string target) =
    {
        &Intern::make_robot_Form,
        &Intern::make_shrubbery_Form,
        &Intern::make_Pardon_Form
    };
    std::string array[] = 
    {
        "robotomy request",
        "shrubbery creation",
        "presidential pardon"
    };
    while (i < 3)
    {
        switch ((int)(form == array[i]))
        {
            case 0:
                i++;
                break;
            case 1:
                return (this->*funcs[i])(target);
                break;
        }
    }
    std::cerr << "Unknown Form Name" << std::endl;
    return NULL;
};