#include "Form.hpp"

Form::GradeTooLowException::GradeTooLowException(const char* msg): _msg(msg)
{
};

const char *Form::GradeTooLowException::what(void) const _GLIBCXX_NOTHROW
{
    return _msg;
};

Form::GradeTooHighException::GradeTooHighException(const char* msg): _msg(msg)
{
};

const char *Form::GradeTooHighException::what(void) const _GLIBCXX_NOTHROW
{
    return _msg;
};

Form::Form(): _name("Form"), _grade_to_sign(10), _grade_to_execute(10)
{
    this->_is_signed = false;
};
Form::~Form()
{

};
Form::Form(std::string const Name, int Grade_to_sign, int Grade_to_execute): _name(Name), _grade_to_sign(Grade_to_sign), _grade_to_execute(Grade_to_execute)
{
    this->_is_signed = false;
};
Form::Form(Form &copy): _name(copy._name), _grade_to_sign(copy._grade_to_sign), _grade_to_execute(copy._grade_to_execute)
{
    this->_is_signed = copy._is_signed;
};
Form &Form::operator=(Form &copy)
{
    return (copy);
};

std::ostream &operator<<(std::ostream &os, Form &copy)
{
    os << copy.get_name() << " Form grade to signed " << copy.get_grade_to_sign() << ".";
    return os;
};

// void Form::set_name(std::string Name)
// {
//     if (Name.empty() || isdigit(Name[0]))
//         std::cout << "Error:\n Pleas give a valid Name" << std::endl;
//     else
//         this->_name = Name;
// };

std::string Form::get_name(void)
{
    return(this->_name);
};

int Form::get_grade_to_sign(void)
{
    return(this->_grade_to_sign);
};

int Form::get_grade_to_execute(void)
{
    return(this->_grade_to_execute);
};

// void Form::set_grade_to_execute(int Grade)
// {
//     if (Grade > 150)
//         throw(GradeTooLowException("it's too low"));
//     if (Grade < 1)
//         throw(GradeTooHighException("it's too High"));
//     this->_grade_to_execute = Grade;
// };

// void Form::set_grade_to_sign(int Grade)
// {
//     if (Grade > 150)
//         throw(GradeTooLowException("it's too low"));
//     if (Grade < 1)
//         throw(GradeTooHighException("it's too High"));
//     this->_grade_to_sign = Grade;
// };

bool Form::get_is_signed(void)
{
    return this->_is_signed;
};

void Form::beSigned(Bureaucrat a)
{
    if (a.get_grade() > this->_grade_to_sign)
        throw(GradeTooLowException("it's too low"));
    this->_is_signed = true;
};