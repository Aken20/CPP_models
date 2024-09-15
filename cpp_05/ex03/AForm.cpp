#include "AForm.hpp"

AForm::GradeTooLowException::GradeTooLowException(const char* msg): _msg(msg)
{
};

const char *AForm::GradeTooLowException::what(void) const _NOEXCEPT
{
    return _msg;
};

AForm::GradeTooHighException::GradeTooHighException(const char* msg): _msg(msg)
{
};

const char *AForm::GradeTooHighException::what(void) const _NOEXCEPT
{
    return _msg;
};

AForm::~AForm()
{
    std::cout << "AForm: Default distructor called" << std::endl;
};
AForm::AForm(std::string const Name, int Grade_to_sign, int Grade_to_execute): _name(Name), _grade_to_sign(Grade_to_sign), _grade_to_execute(Grade_to_execute)
{
    std::cout << "AForm: constructor called" << std::endl;
    if (Grade_to_sign > 150 || Grade_to_execute > 150)
        throw(GradeTooLowException("AForm: Grade Is Too Low To Assign"));
    if (Grade_to_sign < 1 || Grade_to_execute < 1)
        throw(GradeTooHighException("AForm: Grade Is Too High To Assign"));
    this->_is_signed = false;
};
AForm::AForm(AForm &copy): _name(copy._name), _grade_to_sign(copy._grade_to_sign), _grade_to_execute(copy._grade_to_execute)
{
    std::cout << "AForm: copy constructor called" << std::endl;
    this->_is_signed = copy._is_signed;
};

// AForm &AForm::operator=(AForm &copy)
// {
//     return (*this);
// };

// void AForm::set_name(std::string Name)
// {
//     if (Name.empty() || isdigit(Name[0]))
//         std::cout << "Error:\n Pleas give a valid Name" << std::endl;
//     else
//         this->_name = Name;
// };

std::string AForm::get_name(void) const
{
    return(this->_name);
};

int AForm::get_grade_to_sign(void) const
{
    return(this->_grade_to_sign);
};

int AForm::get_grade_to_execute(void) const
{
    return(this->_grade_to_execute);
};

// void AForm::set_grade_to_execute(int Grade)
// {
//     if (Grade > 150)
//         throw(GradeTooLowException("Grade Is Too Low"));
//     if (Grade < 1)
//         throw(GradeTooHighException("Grade Is Too High"));
//     this->_grade_to_execute = Grade;
// };

// void AForm::set_grade_to_sign(int Grade)
// {
//     if (Grade > 150)
//         throw(GradeTooLowException("Grade Is Too Low"));
//     if (Grade < 1)
//         throw(GradeTooHighException("Grade Is Too High"));
//     this->_grade_to_sign = Grade;
// };

std::ostream &operator<<(std::ostream &os, AForm &copy)
{
    os << copy.get_name() << " AForm grade to sign is " << copy.get_grade_to_sign() << " Form grade to execute is " << copy.get_grade_to_execute();
    if (copy.get_is_signed())
        os << " and it's signed.";
    else
        os << " and it's not signed.";
    return os;
};

bool AForm::get_is_signed(void) const
{
    return this->_is_signed;
};

void AForm::beSigned(Bureaucrat const &a)
{
    std::cout << "Form: beSigned called" << std::endl;
    if (a.get_grade() > this->_grade_to_sign)
        throw(GradeTooLowException("AForm: Grade Is Too Low To Sign"));
    else
        this->_is_signed = true;
};