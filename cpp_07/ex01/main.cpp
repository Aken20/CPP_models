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

std::cout << "Before the function: ";
for (int i = 0; i < len; i++)
std::cout << array[i] << " ";
std::cout << std::endl;

::iter(array, len, multiply_by_3);

std::cout << "After the function: ";
for (int i = 0; i < len; i++)
    std::cout << array[i] << " ";
std::cout << std::endl;


std::cout << "Again with the first 4 elements: ";
::iter(array, 4, multiply_by_3);
for (int i = 0; i < len; i++)
    std::cout << array[i] << " ";
std::cout << std::endl;

}
