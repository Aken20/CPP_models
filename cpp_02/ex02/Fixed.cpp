#include "Fixed.hpp"

Fixed::Fixed(void)
{
    std::cout << "Default constructor called" << std::endl;
    this->value = 0;
};
Fixed::Fixed(const int value)
{
    this->value = value << this->Fixed_point;
};
Fixed::Fixed(const float fixed_point)
{
    this->value = roundf(fixed_point * (1 << this->Fixed_point));
};
Fixed::Fixed(const Fixed &copy)
{
    std::cout << "Copy constructor called" << std::endl;
    this->value = copy.getRawBits();
};
Fixed::~Fixed()
{

};
Fixed &Fixed::operator=(const Fixed &copy)
{
    std::cout << "Copy assignment operator called" << std::endl;
    if (this == &copy)
        return *this;
    this->value = copy.getRawBits();
    return *this;
};

Fixed& Fixed::operator+(const Fixed &T)
{
    this->setRawBits(this->toFloat() + T.toFloat());
    return (*this);
};
Fixed& Fixed::operator-(const Fixed &T)
{
    this->setRawBits(this->toFloat() - T.toFloat());
    return (*this);
};
Fixed& Fixed::operator*(const Fixed &T)
{
    this->setRawBits(this->toFloat() * T.toFloat());
    return (*this);
};
Fixed& Fixed::operator/(const Fixed &T)
{
    this->setRawBits(this->toFloat() / T.toFloat());
    return (*this);
};

Fixed& Fixed::operator++(void)
{
    ++(*this).value;
    return *this;
};

float Fixed::operator++(int)
{
    float m_value = this->toFloat();
    ++(*this).value;
    return m_value;
};

Fixed& Fixed::operator--(void)
{
    --(*this).value;
    return *this;
};

float Fixed::operator--(int)
{
    float m_value = this->toFloat();
    --(*this).value;
    return m_value;
};

std::ostream &operator<<(std::ostream& COUT, const Fixed &fixed)
{
    COUT << fixed.toFloat();
    return COUT;
};

int Fixed::getRawBits(void) const
{
    return (this->value);
};
void Fixed::setRawBits(const int i)
{
    this->value = i << this->Fixed_point;
};
void Fixed::setRawBits(const float i)
{
    this->value = roundf(i * (1 << this->Fixed_point));
};
float Fixed::toFloat( void ) const
{
    return ((float)this->value / (1 << this->Fixed_point));
};
int Fixed::toInt( void ) const
{
    return (roundf((float)this->value / (1 << this->Fixed_point)));
};

bool operator<(const Fixed &a, const Fixed &b)
{
    return (a.getRawBits() < b.getRawBits());
};
bool operator>(const Fixed &a, const Fixed &b)
{
    return (a.getRawBits() > b.getRawBits());
};
bool operator<=(const Fixed &a, const Fixed &b)
{
    return (a.getRawBits() <= b.getRawBits());
};
bool operator>=(const Fixed &a, const Fixed &b)
{
    return (a.getRawBits() >= b.getRawBits());
};
bool operator==(const Fixed &a, const Fixed &b)
{
    return (a.getRawBits() == b.getRawBits());
};
bool operator!=(const Fixed &a, const Fixed &b)
{
    return (a.getRawBits() != b.getRawBits());
};

const Fixed &Fixed::min(const Fixed&Fixed_A, const Fixed&Fixed_B)
{
    if (Fixed_A > Fixed_B)
        return(Fixed_B);
    return (Fixed_A);
};
Fixed& Fixed::min(Fixed&Fixed_A, Fixed&Fixed_B)
{
    if (Fixed_A > Fixed_B)
        return(Fixed_B);
    return (Fixed_A);
};
const Fixed& Fixed::max(const Fixed&Fixed_A, const Fixed&Fixed_B)
{
    if (Fixed_A < Fixed_B)
        return(Fixed_B);
    return (Fixed_A);
};
Fixed& Fixed::max(Fixed&Fixed_A, Fixed&Fixed_B)
{
    if (Fixed_A < Fixed_B)
        return(Fixed_B);
    return (Fixed_A);
};