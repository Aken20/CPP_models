#include <iostream>

int main(void) 
{
    std::string str = "HI THIS IS BRAIN";
    std::string *stringPTR = &str;
    std::string &stringREF = str;

    std::cout << "The memory address of the string: " << &str << std::endl;
    std::cout << "The memory address held by The memory address held by stringPTR: " << &stringPTR << std::endl;
    std::cout << "The memory address held by The memory address held by stringREF: " << &stringREF << std::endl;

    std::cout << "string: " << str << std::endl;
    std::cout << "Pointer: " << *stringPTR << std::endl;
    std::cout << "Reference: " << stringREF << std::endl;
}