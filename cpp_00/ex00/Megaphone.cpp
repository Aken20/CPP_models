#include <iostream>

void str_toupper(char *str)
{
    int i;

    i = 0;
    while (str && str[i])
    {
        str[i] = std::toupper(str[i]);
        i++;
    }
}

int main(int ac, char **av) 
{
    int i = 1;

    if (av[i])
    {
        while (av[i] && i < ac)
        {
            str_toupper(av[i]);
            std::cout << av[i++];
        }
        std::cout << std::endl;
    }
    else
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
    return 0;
}