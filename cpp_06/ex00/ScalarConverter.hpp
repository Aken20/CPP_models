#ifndef _ScalarConverter_H_
# define _ScalarConverter_H_

#include <iostream>
#include <stdlib.h>

class ScalarConverter
{
    private:
        ScalarConverter();
        ScalarConverter(ScalarConverter &copy);
        ScalarConverter& operator=(ScalarConverter &copy);
        ~ScalarConverter();
        
    public:
        static void convert(std::string str);
};

#endif