#include "Harl.hpp"

int main()
{
    Harl harl;
    std::string comp;
    while (true)
    {
        std::cout << "enter input: " << std::endl; 
        std::getline(std::cin, comp);
        if (!std::cin)
            return 1;
        harl.complain(comp);
    }
    return 0;
}