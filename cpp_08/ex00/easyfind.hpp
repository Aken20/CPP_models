#ifndef _EASYFIND_H_
# define _EASYFIND_H_

#include <iostream>
#include <exception>
#include <algorithm>
#include <vector>

template <class T>
typename T::iterator easyfind(T array, int to_find)
{
    typename T::iterator p;

    p = std::find(array.begin(), array.end(), to_find);
    if (p == array.end())
        throw std::exception();
    return p;
}

#endif