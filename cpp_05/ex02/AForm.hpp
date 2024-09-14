#ifndef _AFORM_H_
# define _AFORM_H_

#include <iostream>
#include <exception>
#include "Bureaucrat.hpp"

class Bureaucrat;

class AForm
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
                const char *what(void) const _GLIBCXX_NOTHROW;
        };
        class GradeTooLowException : public std::exception
        {
            private:
                const char* _msg;
            
            public:
                GradeTooLowException(const char* msg);
                const char *what(void) const _GLIBCXX_NOTHROW;
        };
        AForm(std::string const Name, int Grade_to_sign, int Grade_to_execute);
        AForm(AForm &copy);
        virtual ~AForm(void);
        AForm &operator=(AForm &copy);
        std::string get_name(void);
        int get_grade_to_sign(void);
        int get_grade_to_execute(void);
        bool get_is_signed(void);
        virtual void execute(Bureaucrat const & executor) const = 0;
        void beSigned(Bureaucrat a);
};
std::ostream &operator<<(std::ostream &os, AForm &copy);


#endif