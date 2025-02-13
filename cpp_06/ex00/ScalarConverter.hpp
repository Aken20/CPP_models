#ifndef _ScalarConverter_H_
# define _ScalarConverter_H_

#include <iostream>
#include <stdlib.h>

class ScalarConverter
{
    private:
        static void to_int(std::string str);
        static void to_float(std::string str);
        static void to_double(std::string str);
        static void to_char(std::string str);

    public:
        static void convert(std::string str);
};

#endif