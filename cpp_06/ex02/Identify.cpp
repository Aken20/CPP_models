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
    std::cout << "Pointer: the class is inhereted class is from type ";
    if (dynamic_cast<A*>(p))
        std::cout << "A" << std::endl;
    else if (dynamic_cast<B*>(p))
        std::cout << "B" << std::endl;
    else if (dynamic_cast<C*>(p))
        std::cout << "C" << std::endl;
    else 
        std::cout << "UNKOWN" << std::endl;
}

void identify(Base &p)
{
    std::cout << "Reffrence: the class is inhereted class is from type ";
    try
    {
        (void)dynamic_cast<A&>(p);
        std::cout << "A" << std::endl;
    }
    catch (std::exception &e)
    {
        try
        {
            (void)dynamic_cast<B&>(p);
            std::cout << "B" << std::endl;
        }
        catch (std::exception &e)
        {
            try
            {
                (void)dynamic_cast<C&>(p);
                std::cout << "C" << std::endl;
            }
            catch (std::exception &e)
            {
                std::cout << "UNKOWN" << std::endl;
            }
        }
    }
}