#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main()
{
    try
    {
        Bureaucrat test("test", 149);
        std::cout << test << std::endl;
        test.decrement();
        std::cout << test << std::endl;
        test.set_grade(8);
        std::cout << test << std::endl;
        // test.increment();
        // std::cout << test << std::endl;
        PresidentialPardonForm a("mindokstai");
        std::cout << a << std::endl;
        test.executeForm(a);
        test.signForm(a);
        test.executeForm(a);
    }
    catch (std::exception &e)
    {
        std::cerr << e.what() << std::endl;
    }
    return 0;
}