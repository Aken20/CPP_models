#ifndef _SERIALIZER_H_
# define _SERIALIZER_H_

#include <iostream>
#include <stdlib.h>

class Serializer
{
    public:
    static uintptr_t serialize(Data* ptr);
    static Data* deserialize(uintptr_t raw);
};

#endif