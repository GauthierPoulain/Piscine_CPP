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
	p_value = ((Fixed &)t).getRawBits();
	return *this;
}

Fixed Fixed::operator+(const Fixed &t)
{
	Fixed res(*this);
	res.setRawBits(this->getRawBits() + ((Fixed &)t).getRawBits());
	return res;
}

Fixed Fixed::operator-(const Fixed &t)
{
	Fixed res(*this);
	res.setRawBits(this->getRawBits() - ((Fixed &)t).getRawBits());
	return res;
}

Fixed Fixed::operator*(const Fixed &t)
{
	Fixed res(*this);
	res.setRawBits(((this->toFloat()) * (((Fixed &)t).toFloat())) * (1 << p_bits));
	return res;
}

Fixed Fixed::operator/(const Fixed &t)
{
	Fixed res(*this);
	res.setRawBits(((this->toFloat()) / (((Fixed &)t).toFloat())) * (1 << p_bits));
	return res;
}

Fixed Fixed::operator++(int)
{
	Fixed res(*this);
	p_value += 1;
	return res;
}

Fixed Fixed::operator++()
{
	p_value += 1;
	return *this;
}

Fixed Fixed::operator--(int)
{
	Fixed res(*this);
	p_value -= 1;
	return res;
}

Fixed Fixed::operator--()
{
	p_value -= 1;
	return *this;
}

void Fixed::setRawBits(const int raw)
{
	p_value = raw;
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

bool Fixed::operator>(const Fixed &t)
{
	return this->getRawBits() > ((Fixed &)t).getRawBits();
}

bool Fixed::operator<(const Fixed &t)
{
	return this->getRawBits() < ((Fixed &)t).getRawBits();
}

bool Fixed::operator>=(const Fixed &t)
{
	return this->getRawBits() >= ((Fixed &)t).getRawBits();
}

bool Fixed::operator<=(const Fixed &t)
{
	return this->getRawBits() <= ((Fixed &)t).getRawBits();
}

bool Fixed::operator==(const Fixed &t)
{
	return this->getRawBits() == ((Fixed &)t).getRawBits();
}

bool Fixed::operator!=(const Fixed &t)
{
	return this->getRawBits() != ((Fixed &)t).getRawBits();
}

Fixed Fixed::max(Fixed a, Fixed b)
{
	if (a.getRawBits() > b.getRawBits())
		return a;
	else
		return b;
}

Fixed Fixed::min(Fixed a, Fixed b)
{
	if (a.getRawBits() < b.getRawBits())
		return a;
	else
		return b;
}

std::ostream &operator<<(std::ostream &out, const Fixed &src)
{
	out << src.toFloat();
	return out;
}