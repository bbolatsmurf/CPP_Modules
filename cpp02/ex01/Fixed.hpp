#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
    private:
        int fixedPoint;
        static const int fracBits = 8;
    public:
        Fixed();
        Fixed(const Fixed &copy);
        Fixed &operator=(const Fixed &src);
        ~Fixed();
        Fixed(const int number);
        Fixed(const float num);
        float toFloat(void) const;
        int toInt(void) const;
        void setRawBits(int const res);
		int	getRawBits(void) const;
};

std::ostream& operator <<(std::ostream &o, const Fixed &temp);

#endif