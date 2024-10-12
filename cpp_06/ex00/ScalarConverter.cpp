#include "ScalarConverter.hpp"

void ScalarConverter::convert(std::string str)
{
    std::cout << "char: " << static_cast<char>(atoi(str.c_str())) << std::endl;
    std::cout << "int: " << static_cast<int>(atoi(str.c_str())) << std::endl;
    std::cout << "float: " << dynamic_cast<std::string &>(str) << "f" << std::endl;
    std::cout << "double: " << static_cast<double>(atof(str.c_str())) << std::endl;
}