#include "iter.hpp"

int multiply_by_3(int a)
{
    return a * 3;
}

int main( void ) {

int len = 10;
int *array = new int[len];

for (int i = 0; i < len; i++)
    array[i] = i;

for (int i = 0; i < len; i++)
    std::cout << array[i] << " ";
std::cout << std::endl;

::iter(array, len, multiply_by_3);
for (int i = 0; i < len; i++)
    std::cout << array[i] << " ";
std::cout << std::endl;


::iter(array, 4, multiply_by_3);
for (int i = 0; i < len; i++)
    std::cout << array[i] << " ";
std::cout << std::endl;

}
