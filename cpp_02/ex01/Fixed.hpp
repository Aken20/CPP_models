#ifndef _FIXED_H_
# define _FIXED_H_

# include <iostream>
# include <cmath>

class Fixed
{
    private:
        int value;
        float Fixed_point;

    public:
        Fixed(void);
        Fixed(const int value);
        Fixed(const float fixed_point);
        Fixed(const Fixed &copy);
        ~Fixed();
        friend std::ostream& operator<<(std::ostream& os, const Fixed &fixed);
        Fixed& operator=(const Fixed &copy);
        float toFloat( void ) const;
        int toInt( void ) const;
        int getRawBits(void) const;
        void setRawBits(const int i);
};

#endif