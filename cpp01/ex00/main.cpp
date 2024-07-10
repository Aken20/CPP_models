#include <iostream>

int main(int ac, char **av) 
{
    int i = 1;

    if (av[i])
    {
        while (av[i] && i < ac)
            std::cout << av[i++];
        std::cout << '\n';
    }
    else
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *\n";
    return 0;
}