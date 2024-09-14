#include "Bureaucrat.hpp"
#include "AForm.hpp"

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
    catch (std::exception &e)
    {
        std::cerr << e.what() << std::endl;
    }
    return 0;
}