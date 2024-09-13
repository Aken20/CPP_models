#include "Bureaucrat.hpp"

GradeTooLowException::GradeTooLowException(const char* msg): _msg(msg)
{
};

void GradeTooLowException::print_error(void)
{
    std::cout << _msg << std::endl;
};

GradeTooHighException::GradeTooHighException(const char* msg): _msg(msg)
{
};

void GradeTooHighException::print_error(void)
{
    std::cout << _msg << std::endl;
};

Bureaucrat::Bureaucrat()
{
    this->_name = "Default";
    this->_grade = 150;
};
Bureaucrat::~Bureaucrat()
{

};
Bureaucrat::Bureaucrat(std::string Name, int Grade)
{
    this->set_name(Name);
    this->set_grade(Grade);
};
Bureaucrat::Bureaucrat(Bureaucrat &copy)
{
    this->_name = copy._name;
    this->_grade = copy._grade;
};
Bureaucrat &Bureaucrat::operator=(Bureaucrat &copy)
{
    this->_name = copy._name;
    this->_grade = copy._grade;
    return (*this);
};

// std::ostream &Bureaucrat::operator<<(std::ostream os)
// {
//     os << this->get_name() << " bureaucrat grade " << this->get_grade() << ".";
//     return os;
// };

void Bureaucrat::set_name(std::string Name)
{
    if (Name.empty() || isdigit(Name[0]))
        std::cout << "Error:\n Pleas give a valid Name" << std::endl;
    else
        this->_name = Name;
};

std::string Bureaucrat::get_name(void)
{
    return(this->_name);
};
void Bureaucrat::set_grade(int Grade)
{
    if (Grade > 150)
        throw(GradeTooLowException("it's too low"));
    if (Grade < 1)
        throw(GradeTooHighException("it's too High"));
    this->_grade = Grade;
};

void Bureaucrat::increment(void)
{
    if (this->get_grade() - 1 < 1)
        throw(GradeTooHighException("grade is too High to increment"));
    else
        this->_grade -= 1;
};
void Bureaucrat::decrement(void)
{
    if (this->get_grade() + 1 > 150)
        throw(GradeTooLowException("grade is too Low to decrement"));
    else
        this->_grade += 1;
};

int Bureaucrat::get_grade(void)
{
    return(this->_grade);
};
