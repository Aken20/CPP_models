#include "Bureaucrat.hpp"

Bureaucrat::GradeTooLowException::GradeTooLowException(const char* msg): _msg(msg)
{
};

const char *Bureaucrat::GradeTooLowException::what(void) const _GLIBCXX_NOTHROW
{
    return _msg;
};

Bureaucrat::GradeTooHighException::GradeTooHighException(const char* msg): _msg(msg)
{
};

const char *Bureaucrat::GradeTooHighException::what(void) const _GLIBCXX_NOTHROW
{
    return _msg;
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

std::ostream &operator<<(std::ostream &os, Bureaucrat &copy)
{
    os << copy.get_name() << " bureaucrat grade " << copy.get_grade() << ".";
    return os;
};

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

void Bureaucrat::signForm(AForm &a)
{
    if (this->get_grade() <= a.get_grade_to_sign())
    {
        a.beSigned(*this);
        std::cout << this->_name << ": Signed " << a.get_name() << std::endl;
    }
    else
    {
        std::cout << this->_name << ": couldn’t sign " << a.get_name() << " because the it require a higher grade." << std::endl;
    }
};