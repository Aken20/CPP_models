#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main()
{
    std::srand(std::time(NULL));
    try
    {
        Bureaucrat test("test", 149);
        std::cout << test << std::endl;
        test.decrement();
        std::cout << test << std::endl;
        test.set_grade(20);
        std::cout << test << std::endl;
        // test.increment();
        // std::cout << test << std::endl;
        ShrubberyCreationForm shrubbery("mindoksai");
        std::cout << shrubbery << std::endl;
        test.executeForm(shrubbery);
        test.signForm(shrubbery);
        std::cout << shrubbery << std::endl;
        test.executeForm(shrubbery);
        RobotomyRequestForm robot("mindokstai");
        std::cout << robot << std::endl;
        test.executeForm(robot);
        test.signForm(robot);
        std::cout << robot << std::endl;
        test.executeForm(robot);
        PresidentialPardonForm pardon("mindokstai");
        std::cout << pardon << std::endl;
        test.executeForm(pardon);
        test.signForm(pardon);
        std::cout << pardon << std::endl;
        test.executeForm(pardon);
    }
    catch (std::exception &e)
    {
        std::cerr << e.what() << std::endl;
    }
    return 0;
}