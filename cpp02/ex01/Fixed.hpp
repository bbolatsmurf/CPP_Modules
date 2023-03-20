#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class Fixed
{
    private:
        int fixedPoint;
        static const int fracBits = 8;
    public:
        Fixed();
        Fixed(Fixed &copy);
        Fixed &operator=(const Fixed &src);
        ~Fixed();
        Fixed(const int number);
        Fixed(const float number);
        float toFloat(void) const;
        int toInt(void) const;
};

std::ostream &operator <<(std::ostream &o, const Fixed &temp);

#endif