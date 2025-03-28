#ifndef _ITER_H_
# define _ITER_H_

#include <iostream>

template <typename P, typename L, typename F>
void iter(P *address, L length, F func)
{
    if (!address or address == NULL)
        return ;
    
    for (L i = 0; i < length; i++)
        func(address[i]);
}

#endif