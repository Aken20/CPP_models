#ifndef _SPAN_H_
# define _SPAN_H_

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <exception>

class Span
{
    private:
        int* _array;
        unsigned int _maximum;
        unsigned int _size;

    public:
        class SPAN_EXCEPT : public std::exception
        {
            private:
                const char* _msg;
            
            public:
                SPAN_EXCEPT(const char* msg);
                const char *what(void) const throw();
        };
        Span();
        ~Span();
        Span(unsigned int n);
        Span(Span &copy);
        Span &operator=(Span &copy);
        int &operator[](unsigned int n);
        void addNumber(int num);
        int shortestSpan(void);
        int longestSpan(void);

};

#endif