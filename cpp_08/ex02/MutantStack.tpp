#include "MutantStack.hpp"

template <typename T>
Array<T>::Out_Of_Range::Out_Of_Range(const char* msg): _msg(msg) {}

template <typename T>
const char *Array<T>::Out_Of_Range::what(void) const throw()
{
    return _msg;
}

template <typename T>
Array<T>::Array()
{
    _size = 0;
}

template <typename T>
Array<T>::~Array()
{
    if (_size > 0)
        delete[] array;
}

template <typename T>
Array<T>::Array(unsigned int n)
{
    _size = n;
    array = new T[n];
}
template <typename T>
Array<T>::Array(Array<T> &copy)
{
    _size = copy._size;
    array = new T[copy._size];
    for (unsigned int i = 0; i < copy.size(); i++)
        array[i] = copy[i];
}

template <typename T>
Array<T> &Array<T>::operator=(Array<T> &copy)
{
    if (_size > 0)
    {
        delete[] array;
        _size = copy.size();
        array = new T[copy.size()];
        for (unsigned int i = 0; i <= copy.size(); i++)
            array[i] = copy[i];
    }

}

template <typename T>
T& Array<T>::operator[](unsigned int n)
{
    if (n < _size)
        return array[n];
    else
        throw Out_Of_Range("Index is out of Range.");
}

template <typename T>
unsigned int Array<T>::size()
{
    return _size;
}