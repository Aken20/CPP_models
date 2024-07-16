#include "Fixed.hpp"

Fixed::Fixed(void)
{
    std::cout << "Default constructor called" << std::endl;
    this->value = 0;
};
Fixed::Fixed(const int value)
{
    this->value = value;
    this->Fixed_point = (int)value - value;
};
Fixed::Fixed(const float fixed_point)
{
    this->value = fixed_point;
    this->Fixed_point = fixed_point;
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

std::ostream &operator<<(std::ostream& os, const Fixed &fixed)
{
    os << fixed.getRawBits();
    return os;
};

int Fixed::getRawBits(void) const
{
    return (this->value);
};
void Fixed::setRawBits(const int i)
{
    this->value = i;
};
float Fixed::toFloat( void ) const
{
    return this->Fixed_point;
};
int Fixed::toInt( void ) const
{
    return this->value;
};