#ifndef _FORM_H_
# define _FORM_H_

#include <iostream>
#include <exception>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
    private:
        const std::string _name;
        bool _is_signed;
        const int _grade_to_sign;
        const int _grade_to_execute;
    
    public:

        class GradeTooHighException : public std::exception
        {
            private:
                const char* _msg;
            
            public:
                GradeTooHighException(const char* msg);
                const char *what(void) const _NOEXCEPT;
        };
        class GradeTooLowException : public std::exception
        {
            private:
                const char* _msg;
            
            public:
                GradeTooLowException(const char* msg);
                const char *what(void) const _NOEXCEPT;
        };
        Form(void);
        ~Form(void);
        Form(std::string const Name, int Grade_to_sign, int Grade_to_execute);
        Form(Form &copy);
        Form &operator=(Form &copy);
        std::string get_name(void);
        int get_grade_to_sign(void);
        int get_grade_to_execute(void);
        bool get_is_signed(void);
        void beSigned(Bureaucrat &a);
};
std::ostream &operator<<(std::ostream &os, Form &copy);


#endif