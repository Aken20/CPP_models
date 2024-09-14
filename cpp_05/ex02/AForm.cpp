#include "AForm.hpp"

AForm::GradeTooLowException::GradeTooLowException(const char* msg): _msg(msg)
{
};

const char *AForm::GradeTooLowException::what(void) const _GLIBCXX_NOTHROW
{
    return _msg;
};

AForm::GradeTooHighException::GradeTooHighException(const char* msg): _msg(msg)
{
};

const char *AForm::GradeTooHighException::what(void) const _GLIBCXX_NOTHROW
{
    return _msg;
};

AForm::~AForm()
{

};
AForm::AForm(std::string const Name, int Grade_to_sign, int Grade_to_execute): _name(Name), _grade_to_sign(Grade_to_sign), _grade_to_execute(Grade_to_execute)
{
    this->_is_signed = false;
};
AForm::AForm(AForm &copy): _name(copy._name), _grade_to_sign(copy._grade_to_sign), _grade_to_execute(copy._grade_to_execute)
{
    this->_is_signed = copy._is_signed;
};
AForm &AForm::operator=(AForm &copy)
{
    return (copy);
};

std::ostream &operator<<(std::ostream &os, AForm &copy)
{
    os << copy.get_name() << " AForm grade to signed " << copy.get_grade_to_sign() << ".";
    return os;
};

// void AForm::set_name(std::string Name)
// {
//     if (Name.empty() || isdigit(Name[0]))
//         std::cout << "Error:\n Pleas give a valid Name" << std::endl;
//     else
//         this->_name = Name;
// };

std::string AForm::get_name(void)
{
    return(this->_name);
};

int AForm::get_grade_to_sign(void)
{
    return(this->_grade_to_sign);
};

int AForm::get_grade_to_execute(void)
{
    return(this->_grade_to_execute);
};

// void AForm::set_grade_to_execute(int Grade)
// {
//     if (Grade > 150)
//         throw(GradeTooLowException("it's too low"));
//     if (Grade < 1)
//         throw(GradeTooHighException("it's too High"));
//     this->_grade_to_execute = Grade;
// };

// void AForm::set_grade_to_sign(int Grade)
// {
//     if (Grade > 150)
//         throw(GradeTooLowException("it's too low"));
//     if (Grade < 1)
//         throw(GradeTooHighException("it's too High"));
//     this->_grade_to_sign = Grade;
// };

bool AForm::get_is_signed(void)
{
    return this->_is_signed;
};

void AForm::beSigned(Bureaucrat a)
{
    if (a.get_grade() > this->_grade_to_sign)
        throw(GradeTooLowException("it's too low"));
    this->_is_signed = true;
};