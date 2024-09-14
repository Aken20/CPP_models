#include "Form.hpp"

Form::GradeTooLowException::GradeTooLowException(const char* msg): _msg(msg)
{
};

const char *Form::GradeTooLowException::what(void) const _NOEXCEPT
{
    return _msg;
};

Form::GradeTooHighException::GradeTooHighException(const char* msg): _msg(msg)
{
};

const char *Form::GradeTooHighException::what(void) const _NOEXCEPT
{
    return _msg;
};

Form::Form(): _name("Form"), _grade_to_sign(10), _grade_to_execute(10)
{
    std::cout << "Form: Default constructor called" << std::endl;
    this->_is_signed = false;
};
Form::~Form()
{
    std::cout << "Form: Default distructor called" << std::endl;
};
Form::Form(std::string const Name, int Grade_to_sign, int Grade_to_execute): _name(Name), _grade_to_sign(Grade_to_sign), _grade_to_execute(Grade_to_execute)
{
    std::cout << "Form: constructor called" << std::endl;
    if (Grade_to_sign > 150 || Grade_to_execute > 150)
        throw(GradeTooLowException("Form: Grade Is Too Low To Assign"));
    if (Grade_to_sign < 1 || Grade_to_execute < 1)
        throw(GradeTooHighException("Form: Grade Is Too High To Assign"));
    this->_is_signed = false;
};
Form::Form(Form &copy): _name(copy._name), _grade_to_sign(copy._grade_to_sign), _grade_to_execute(copy._grade_to_execute)
{
    std::cout << "Form: copy constructor called" << std::endl;
    this->_is_signed = copy._is_signed;
};
Form &Form::operator=(Form &copy)
{
    return (copy);
};

std::ostream &operator<<(std::ostream &os, Form &copy)
{
    os << copy.get_name() << " Form grade to sign is " << copy.get_grade_to_sign() << " Form grade to execute is " << copy.get_grade_to_execute();
    if (copy.get_is_signed())
        os << " and it's signed.";
    else
        os << " and it's not signed.";
    return os;
};

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

bool Form::get_is_signed(void)
{
    return this->_is_signed;
};

void Form::beSigned(Bureaucrat &a)
{
    std::cout << "Form: beSigned called" << std::endl;
    if (a.get_grade() > this->_grade_to_sign)
        throw(GradeTooLowException("Form: Grade Is Too Low To Sign"));
    else
        this->_is_signed = true;
};