#include "Identify.hpp"

int main()
{
    Base *t;
    std::srand(std::time(0));

    t = generate();
    identify(t);
    identify(*t);
    delete t;
}