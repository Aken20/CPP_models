#include "Serializer.hpp"

int main()
{
    Data a;
    Data *b;
    uintptr_t serialized_data;

    a.id = 42;
    a.value = "Just Chilling";

    std::cout << a.id << " " << a.value << std::endl;
    std::cout << &a << std::endl;

    serialized_data = Serializer::serialize(&a);
    std::cout << serialized_data << std::endl;

    b = Serializer::deserialize(serialized_data);
    std::cout << b << std::endl;
    std::cout << b->id << " " << b->value << std::endl;
}