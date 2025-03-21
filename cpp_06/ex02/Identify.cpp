#include "Identify.hpp"

Base *generate()
{
    int i = std::rand();
    std::cout << "genaraiting a class of type ";

    if (i % 3 == 0)
    {
        std::cout << "A." << std::endl;
        return new A;
    }
    if (i % 2 == 0)
    {
        std::cout << "B." << std::endl;
        return new B;
    }
    std::cout << "C." << std::endl;
    return new C;
}

void identify(Base *p)
{
    (void)p;
}

void identify(Base &p)
{
    (void)p;

}