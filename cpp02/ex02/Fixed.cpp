#include "Fixed.hpp"

Fixed::Fixed(){fixedPoint = 0;}

Fixed::~Fixed(){}

Fixed::Fixed(const Fixed &copy){this->fixedPoint = copy.getRawBits();}

Fixed::Fixed(const int number){this->fixedPoint = number << fracBits;}

Fixed::Fixed(const float num){this->fixedPoint = roundf(num * (1 << this->fracBits));}

Fixed &Fixed::operator=(const Fixed &src)
{
	this->fixedPoint = src.getRawBits();
	return (*this);
}

bool Fixed::operator<(Fixed const &src){return(this->toFloat() < src.toFloat());}

bool Fixed::operator>(Fixed const &src){return(this->toFloat() > src.toFloat());}

bool Fixed::operator<=(Fixed const &src){return(this->toFloat() <= src.toFloat());}

bool Fixed::operator>=(Fixed const &src){return(this->toFloat() >= src.toFloat());}

bool Fixed::operator==(Fixed const &src){return(this->toFloat() == src.toFloat());}

bool Fixed::operator!=(Fixed const &src){return(this->toFloat() != src.toFloat());}

std::ostream &operator<<(std::ostream &o, const Fixed &f)
{
	o << f.toFloat();
	return (o);
}

Fixed Fixed::operator+(Fixed const &src){return(Fixed)(this->toFloat() + src.toFloat());}
Fixed Fixed::operator-(Fixed const &src){return(Fixed)(this->toFloat() - src.toFloat());}
Fixed Fixed::operator*(Fixed const &src){return(Fixed)(this->toFloat() * src.toFloat());}
Fixed Fixed::operator/(Fixed const &src){return(Fixed)(this->toFloat() / src.toFloat());}

Fixed& Fixed::operator++()
{
    this->fixedPoint++;
    return *this;
}

Fixed& Fixed::operator--()
{
    this->fixedPoint--;
    return *this;
}

Fixed Fixed::operator++(int)
{
    Fixed src(*this);
    this->fixedPoint++;
    return src;
}

Fixed Fixed::operator--(int)
{
    Fixed src(*this);
    this->fixedPoint--;
    return src;
}

Fixed Fixed::max(const Fixed &obj1, const Fixed &obj2) {
	if (obj1.toFloat() > obj2.toFloat())
		return (obj1);
	else
		return (obj2);
}

Fixed Fixed::min(const Fixed &obj1, const Fixed &obj2) {
	if (obj1.toFloat() < obj2.toFloat())
		return (obj1);
	else
		return (obj2);
}

int Fixed::getRawBits(void) const{return (this->fixedPoint);}
void Fixed::setRawBits(int const raw){this->fixedPoint = raw;}

float Fixed::toFloat(void) const{return (fixedPoint / (float)(1 << fracBits));}
int Fixed::toInt(void) const{return (fixedPoint >> fracBits);}