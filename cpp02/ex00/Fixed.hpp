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
        int getRawBits(void) const; // class'ın veri üyelerinin değiştirilemez olduğunu anlatır. O_RDONLY
        void setRawBits(int const raw);
};

#endif