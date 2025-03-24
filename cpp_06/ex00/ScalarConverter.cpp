#include "ScalarConverter.hpp"

void to_int(std::string str)
{
    char *end;
    long i = strtol(str.c_str(), &end, 10);

    if (i > INT_MAX || i < INT_MIN || end == str.c_str())
        std::cout << "int: impossible" << std::endl;
    else
        std::cout << "int: " << static_cast<int>(i) << std::endl;
}

void to_float(std::string str)
{
    char *end;
    long double i = strtold(str.c_str(), &end);

    if (i > std::numeric_limits<float>::max() || i < std::numeric_limits<float>::lowest() || end == str.c_str())
        std::cout << "float: impossible" << std::endl;
    else
    {
        if (i == static_cast<int>(i))
            std::cout << "float: " << static_cast<float>(i) << ".0f" << std::endl;
        else
            std::cout << "float: " << static_cast<float>(i) << "f" << std::endl;
    }
}

void to_double(std::string str)
{
    char *end;
    long double i = strtold(str.c_str(), &end);

    if (i > std::numeric_limits<double>::max() || i < std::numeric_limits<double>::lowest() || end == str.c_str())
        std::cout << "double: impossible" << std::endl;
    else
    {
        if (i == static_cast<int>(i))
            std::cout << "double: " << static_cast<double>(i) << ".0" << std::endl;
        else
            std::cout << "double: " << static_cast<double>(i) << std::endl;
    }
}

void to_char(std::string str)
{
    char *end;
    long long i = strtol(str.c_str(), &end, 10);

    if (i > CHAR_MAX || i < CHAR_MIN || end == str.c_str())
        std::cout << "char: impossible" << std::endl;
    else if (isprint(static_cast<char>(i)))
        std::cout << "char: '" << static_cast<char>(i) << "'" << std::endl;
    else
        std::cout << "char: Non displayable" << std::endl;
}

bool handel_inf(std::string &str)
{
    if (str.length() == 3 and str.find("inf") == 0)
        return true;
    if (str.length() == 4 and ((str.find("inf") == 1 and (str[0] == '-' or str[0] == '+')) or (str.find("inf") == 0 and str[3] == 'f')))
    {
        if (str.find("inf") == 0 and str[3] == 'f')
            str = "inf";
        return true;
    }
    if (str.length() == 5 and str.find("inf") == 1 and (str[0] == '-' or str[0] == '+') and str[4] == 'f')
    {
        if (str[0] == '-')
            str = "-inf";
        else
            str = "+inf";
        return true;
    }
    return false;
}

void ScalarConverter::convert(std::string str)
{
    if (str.length() > 1)
    {
        to_char(str);
        if (handel_inf(str))
        {
            std::cout << "int: " << str << std::endl;
            std::cout << "float: " << str << "f" << std::endl;
            std::cout << "double: " << str << std::endl;
        }
        else
        {
            to_int(str);
            to_float(str);
            to_double(str);
        }
    }
    else
    {
        if (isdigit(str[0]))
        {
            std::cout << "char: Non displayable" << std::endl;
            std::cout << "int: " << str[0] << std::endl;
            std::cout << "float: " << str[0] << ".0f" << std::endl;
            std::cout << "double: " << str[0] << ".0" << std::endl;
        }
        else
        {
            std::cout << "char: '" << str[0] << "'" << std::endl;
            std::cout << "int: " << static_cast<int>(str[0]) << std::endl;
            std::cout << "float: " << static_cast<float>(str[0]) << ".0f" << std::endl;
            std::cout << "double: " << static_cast<double>(str[0]) << ".0" << std::endl;
        }
    }
}