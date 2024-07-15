#include <fstream>
#include <iostream>

int main(int ac, char** av)
{
    std::string line;
    std::string name;
    std::string name2;
    size_t i = 0;

    name = av[1];
    name2 = name + ".replace";
    if (ac != 4)
        return 1;
    std::ifstream file(name.c_str());
    std::ofstream file2(name2.c_str());
    if (!file)
        return 1;
    while (file)
    {
        file >> line;
        std::cout << line << std::endl;
        while (i < line.length())
        {
            if (line[i] == av[2][0])
                file2 << av[3][0];
            else
                file2 << line[i];
            i++;
        }
        file2 << " ";
        i = 0;
    }
    return 0;
}