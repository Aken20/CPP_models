#ifndef _SERIALIZER_H_
# define _SERIALIZER_H_

#include <iostream>
#include <stdint.h>

struct Data
{
    int id;
    std::string value;
};

class Serializer
{
    public:
        static uintptr_t serialize(Data* ptr);
        static Data* deserialize(uintptr_t raw);
};

#endif