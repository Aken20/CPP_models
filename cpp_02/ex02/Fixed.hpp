#ifndef _FIXED_H_
# define _FIXED_H_

# include <iostream>
# include <cmath>

class Fixed
{
    private:
        int value;
        static const int Fixed_point = 8;

    public:
        Fixed(void);
        Fixed(const int value);
        Fixed(const float fixed_point);
        Fixed(Fixed const &copy);
        ~Fixed();
        Fixed& operator=(const Fixed &copy);
        Fixed& operator+(const Fixed &T);
        Fixed& operator-(const Fixed &T);
        Fixed& operator*(const Fixed &T);
        Fixed& operator/(const Fixed &T);
        float toFloat( void ) const;
        int toInt( void ) const;
        int getRawBits(void) const;
        void setRawBits(const int i);
        static const Fixed& min(const Fixed&Fixed_A, const Fixed&Fixed_B);
        static Fixed& min(Fixed&Fixed_A, Fixed&Fixed_B);
        static const Fixed& max(const Fixed&Fixed_A, const Fixed&Fixed_B);
        static Fixed& max(Fixed&Fixed_A, Fixed&Fixed_B);
};

bool operator<(const Fixed &a, const Fixed &b);
bool operator>(const Fixed &a, const Fixed &b);
bool operator<=(const Fixed &a, const Fixed &b);
bool operator>=(const Fixed &a, const Fixed &b);
bool operator==(const Fixed &a, const Fixed &b);
bool operator!=(const Fixed &a, const Fixed &b);
std::ostream &operator<<(std::ostream& os, const Fixed &fixed);

#endif