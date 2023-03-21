#include "Fixed.hpp"

Fixed::Fixed()
{
    std::cout << "Default constructor called" << std::endl;
    fixedPoint = 0;
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed &copy)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = copy;
}

Fixed::Fixed(const int number)
{
    std::cout << "Int constructor called" << std::endl;
    this->fixedPoint = number << fracBits;
}

Fixed::Fixed(const float num)
{
    std::cout << "Float constructor called" << std::endl;
    this->fixedPoint = roundf(num * (1 << this->fracBits));
    //std::cout << (this->fixedPoint) << std::endl;
}

Fixed &Fixed::operator=(const Fixed &src)
{
    std::cout << "Copy assignment operator called" << std::endl;
    if(this != &src)
        this->fixedPoint = src.getRawBits();
    return(*this);
}

std::ostream& operator<<(std::ostream &o, const Fixed &f)
{
    return(o << f.toFloat());
}

int Fixed::getRawBits(void) const
{
    return(this->fixedPoint);
}

void Fixed::setRawBits(int const res)
{
    this->fixedPoint = res;
}

int Fixed::toInt(void) const
{
    return(round(this->fixedPoint >> this->fracBits));
}

float Fixed::toFloat(void) const
{
    return((float)this->fixedPoint / (1 << this->fracBits));
}
