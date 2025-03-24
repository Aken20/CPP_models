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
    private:
        Serializer();
        Serializer(Serializer &copy);
        Serializer &operator=(Serializer &copy);
        ~Serializer();

    public:
        static uintptr_t serialize(Data* ptr);
        static Data* deserialize(uintptr_t raw);
};

#endif