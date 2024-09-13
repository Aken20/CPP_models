#include "Bureaucrat.hpp"

int main()
{
    try
    {
        Bureaucrat test("test", 150);
        std::cout << test.get_name() << "and it's grade is " << test.get_grade() << "." << std::endl;
        test.decrement();
        std::cout << test.get_name() << "and it's new grade is " << test.get_grade() << "." << std::endl;
        test.set_grade(1);
        std::cout << test.get_name() << "and it's grade is " << test.get_grade() << "." << std::endl;
        test.increment();
        std::cout << test.get_name() << "and it's new grade is " << test.get_grade() << "." << std::endl;
    }
    catch (GradeTooHighException &e)
    {
        e.print_error();
    }
    catch (GradeTooLowException &e)
    {
        e.print_error();
    }
    return 0;
}