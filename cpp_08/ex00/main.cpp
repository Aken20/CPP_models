#include "easyfind.hpp"

int main( void ) {
    std::vector<int> v;

    v.push_back(8);
    v.push_back(7);
    v.push_back(10);
    std::vector<int>::iterator i;
    try
    {
        i = easyfind(v, 10);
        std::cout << *i << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << "NOT FOUND!" << std::endl;
    }
}
