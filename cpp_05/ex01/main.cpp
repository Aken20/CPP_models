#include "Bureaucrat.hpp"
#include "Form.hpp"

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
        // test.increment();
        std::cout << test << std::endl;
        Form a("mindokstai", 0, 5);
        std::cout << a << std::endl;
        test.signForm(a);

    }
    catch (std::exception &e)
    {
        std::cerr << e.what() << std::endl;
    }
    return 0;
}