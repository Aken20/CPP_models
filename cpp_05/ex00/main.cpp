#include "Bureaucrat.hpp"

int main()
{
    try
    {
        Bureaucrat test("test", 149);
        std::cout << test << std::endl;
        test.decrement();
        std::cout << test << std::endl;
        test.set_grade(1);
        std::cout << test << std::endl;
        test.increment();
        std::cout << test << std::endl;
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