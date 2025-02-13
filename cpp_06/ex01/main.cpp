#include "ScalarConverter.hpp"

int main(int ac, char **av)
{
    if (ac == 2)
    {
        if (av[1])
            ScalarConverter::convert(av[1]);
    }
    else
    {
        std::cerr << "INVALID INPUT" << std::endl;
        return 1;
    }
    return 0;
}