#ifndef _BUREACRAT_H_
# define _BUREACRAT_H_

#include <iostream>
#include <exception>

class GradeTooHighException : std::exception
{
    private:
        const char* _msg;
    
    public:
        GradeTooHighException(const char* msg);
        void print_error(void);
};

class GradeTooLowException : std::exception
{
    private:
        const char* _msg;
    
    public:
        GradeTooLowException(const char* msg);
        void print_error();
};

class Bureaucrat
{
    private:
        std::string _name;
        int _grade;
    
    public:
        Bureaucrat(void);
        ~Bureaucrat(void);
        Bureaucrat(std::string Name, int Grade);
        Bureaucrat(Bureaucrat &copy);
        Bureaucrat &operator=(Bureaucrat &copy);
        std::string get_name(void);
        void set_name(std::string Name);
        void set_grade(int Grade);
        void increment(void);
        void decrement(void);
        int get_grade(void);
        // std::ostream &operator<<(std::ostream os);
};


#endif