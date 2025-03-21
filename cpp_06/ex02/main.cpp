#include "Identify.hpp"

int main()
{
    Base *t;
    std::srand(std::time(0));

    t = generate();

    delete t;
}