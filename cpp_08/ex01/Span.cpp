#include "Span.hpp"

Span::SPAN_EXCEPT::SPAN_EXCEPT(const char* msg): _msg(msg) {}

const char *Span::SPAN_EXCEPT::what(void) const throw()
{
    return _msg;
}

Span::Span()
{
    _size = 0;
    _maximum = 0;
}

Span::~Span()
{
    if (_size > 0)
        delete[] _array;
}

Span::Span(unsigned int n)
{
    _maximum = n;
    _size = 0;
    _array = new int[n];
}
Span::Span(Span &copy)
{
    _size = copy._size;
    _maximum = copy._maximum;
    _array = new int[copy._maximum];
    for (unsigned int i = 0; i < copy._size; i++)
        _array[i] = copy._array[i];
}

Span &Span::operator=(Span &copy)
{
    if (_size > 0)
    {
        delete[] _array;
        _size = copy._maximum;
        _array = new int[copy._maximum];
        for (unsigned int i = 0; i <= copy._size; i++)
            _array[i] = copy._array[i];
    }
    return *this;
}

int& Span::operator[](unsigned int n)
{
    if (n < _size)
        return _array[n];
    else
        throw SPAN_EXCEPT("Index is out of Range.");
}

void Span::addNumber(int num)
{
    if (_size < _maximum)
        _array[_size++] = num;
    else
        throw SPAN_EXCEPT("the Limit has been exceded.");
}
int Span::shortestSpan(void)
{
    if (_size < 2)
        throw SPAN_EXCEPT("Not Enough.");
    std::sort(_array, _array + _size);
    for (unsigned int i = 0; i < _size; i++)
        std::cout << _array[i] << std::endl;
    return 0;
};
int Span::longestSpan(void)
{
    if (_size < 2)
        throw SPAN_EXCEPT("Not Enough.");
    std::sort(_array, _array + _size);
    return 0;
}