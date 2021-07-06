#include "Fixed.hpp"

Fixed::Fixed(void)
{
	p_value = 0;
}

Fixed::Fixed(const Fixed &src)
{
	*this = src;
}

Fixed::Fixed(const float f)
{
	p_value = roundf(f * (1 << p_bits));
}

Fixed::Fixed(const int i)
{
	p_value = (i << p_bits);
}

Fixed::~Fixed(void)
{
}

Fixed &Fixed::operator=(const Fixed &t)
{
	this->p_value = ((Fixed &)t).getRawBits();
	return *this;
}

Fixed &Fixed::operator*(const Fixed &t)
{
	p_value = (this->getRawBits() * ((Fixed &)t).getRawBits()) >> p_bits;
	return *this;
}

Fixed &Fixed::operator++(int val)
{
	Fixed *save;

	save = new Fixed(*this);
	if (val)
		p_value += val << p_bits;
	else
		p_value = this->getRawBits() + 1;
	return *save;
}

Fixed Fixed::operator++()
{
	p_value = this->getRawBits() + 1;
	return *this;
}

Fixed &Fixed::operator--(int val)
{
	p_value = getRawBits() - val;
	return *this;
}

Fixed Fixed::operator--()
{
	p_value = getRawBits() - 1;
	return *this;
}

int Fixed::getRawBits(void)
{
	return (this->p_value);
}

float Fixed::toFloat(void) const
{
	return (p_value / (float)(1 << p_bits));
}

int Fixed::toInt(void) const
{
	return (p_value >> p_bits);
}

std::ostream &operator<<(std::ostream &out, const Fixed &src)
{
	out << src.toFloat();
	return out;
}

Fixed Fixed::max(Fixed a, Fixed b)
{
	if (a.getRawBits() > b.getRawBits())
		return a;
	else
		return b;
}