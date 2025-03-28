#ifndef _ARRAY_H_
# define _ARRAY_H_

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <exception>

template <typename T>
class Array
{
    private:
        T* array;
        unsigned int _size;

    public:
        class Out_Of_Range : public std::exception
        {
            private:
                const char* _msg;
            
            public:
                Out_Of_Range(const char* msg);
                const char *what(void) const throw();
        };
        Array();
        ~Array();
        Array(unsigned int n);
        Array(Array &copy);
        Array &operator=(Array &copy);
        T &operator[](unsigned int n);
        unsigned int size();

};

#endif