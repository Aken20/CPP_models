#ifndef _FIXED_H_
# define _FIXED_H_

# include <iostream>

class Fixed
{
    private:
        int value;
        static const int Fixed_point;

    public:
        int getRawBits(void) const;
        void setRawBits(const int i);
        Fixed(void);
        Fixed(const Fixed &copy);
        Fixed& operator=(const Fixed &copy);
        ~Fixed();
};

#endif