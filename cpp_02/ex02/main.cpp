#include "Fixed.hpp"

int main( void ) {
    Fixed a(2);
    Fixed const b(5.05f);
    std::cout << a << std::endl;
    std::cout << b << std::endl;
    std::cout << a * b << std::endl;
    std::cout << Fixed::max( a, b ) << std::endl;
    return 0;
}