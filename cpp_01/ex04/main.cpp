#include <fstream>
#include <iostream>

int main(int ac, char** av)
{
    std::string line;
    std::string name;
    std::string name2;
    size_t i;
    size_t j;
    size_t x;

    if (ac != 4)
        return 1;
    name = av[1];
    name2 = name + ".replace";
    std::ifstream file(name.c_str());
    std::ofstream file2(name2.c_str());
    if (!file)
        return 1;
    while (file)
    {
        std::getline(file, line);
        if (!file)
            return 0;
        // std::cout << line << std::endl;
        i = 0;
        while (i < line.length())
        {
            j = 0;
            if (line[i] == av[2][j])
            {
                x = i;
                while (line[i] && line[i] == av[2][j])
                {
                    i++;
                    j++;
                }
                if (av[2][j] == 0)
                {
                    file2 << av[3];
                    i -= 1;
                }
                else
                {
                    i = x;
                    file2 << line[i];
                }
            }
            else
                file2 << line[i];
            i++;
        }
        file2 << std::endl;
    }
    return 0;
}