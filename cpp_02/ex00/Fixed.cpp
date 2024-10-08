#include "Fixed.hpp"

Fixed::Fixed(void)
{
    std::cout << "Default constructor called" << std::endl;
    this->value = 0;
};
Fixed::Fixed(const Fixed &copy)
{
    std::cout << "Copy constructor called" << std::endl;
    this->value = copy.getRawBits();
};
Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
};
Fixed &Fixed::operator=(const Fixed &copy)
{
    std::cout << "Copy assignment operator called" << std::endl;
    if (this == &copy)
        return *this;
    this->value = copy.getRawBits();
    return *this;
};
int Fixed::getRawBits(void) const
{
    std::cout << "getRawBits member function called" << std::endl;
    return (this->value);
};
void Fixed::setRawBits(const int i)
{
    std::cout << "setRawBits member function called" << std::endl;
    this->value = i;
};