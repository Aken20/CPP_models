#ifndef _FIXED_H_
# define _FIXED_H_

# include <iostream>

class Fixed
{
    private:
        int value;
        static const int Fixed_point = 0;

    public:
        Fixed(void);
        Fixed(const Fixed &copy);
        ~Fixed();
        Fixed& operator=(const Fixed &copy);
        int getRawBits(void) const;
        void setRawBits(const int i);
};

#endif