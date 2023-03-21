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
        Fixed(const int number);
        Fixed(const float num);
        Fixed(const Fixed &copy);
        ~Fixed();

        Fixed &operator=(const Fixed &src);

        bool operator>(const Fixed &src);
        bool operator<(const Fixed &src);
        bool operator>=(const Fixed &src);
        bool operator<=(const Fixed &src);
        bool operator==(const Fixed &src);
        bool operator!=(const Fixed &src);

        Fixed operator+(const Fixed &src);
        Fixed operator-(const Fixed &src);
        Fixed operator/(const Fixed &src);
        Fixed operator*(const Fixed &src);

        Fixed& operator++();
        Fixed& operator--();
        Fixed operator++(int);
        Fixed operator--(int);

        static Fixed max(const Fixed &obj1, const Fixed &obj2);
        static Fixed min(const Fixed &obj1, const Fixed &obj2);

        float toFloat(void) const;
        int toInt(void) const;
        void setRawBits(int const res);
		int	getRawBits(void) const;
};

std::ostream &operator <<(std::ostream &o, const Fixed &temp);

#endif