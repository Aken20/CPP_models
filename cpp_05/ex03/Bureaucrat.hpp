#ifndef _BUREACRAT_H_
# define _BUREACRAT_H_

#include <iostream>
#include <exception>
#include "AForm.hpp"

class AForm;

class Bureaucrat
{
    private:
        std::string _name;
        int _grade;
    
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
        Bureaucrat(void);
        ~Bureaucrat(void);
        Bureaucrat(std::string Name, int Grade);
        Bureaucrat(Bureaucrat &copy);
        Bureaucrat &operator=(Bureaucrat &copy);
        std::string get_name(void) const;
        int get_grade(void) const;
        void set_name(std::string Name);
        void set_grade(int Grade);
        void increment(void);
        void decrement(void);
        void signForm(AForm &a);
        void executeForm(AForm const & form);
};
std::ostream &operator<<(std::ostream &os, Bureaucrat &copy);


#endif