#include "Intern.hpp"

Intern::Intern(void)
{
    std::cout << "Intern: Default constructor called" << std::endl;
};
Intern::~Intern(void)
{
    std::cout << "Intern: Default distructor called" << std::endl;
};
Intern::Intern(Intern const &copy)
{
    std::cout << "Intern: Copy constructor called" << std::endl;
};
Intern &Intern::operator=(Intern const &copy)
{

};
AForm *Intern::makeForm(std::string form, std::string target)
{
    std::cout << "Intern: makeForm called" << std::endl;

};