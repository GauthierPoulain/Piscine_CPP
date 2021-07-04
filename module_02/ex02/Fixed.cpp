#include "Fixed.hpp"

Fixed::Fixed(void)
{
	std::cout << "Default constructor called" << std::endl;
	p_value = 0;
}

Fixed::Fixed(const Fixed &src)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
}

Fixed::Fixed(const float f)
{
	std::cout << "Float constructor called" << std::endl;
	p_value = roundf(f * (1 << p_bits));
}

Fixed::Fixed(const int i)
{
	std::cout << "Int constructor called" << std::endl;
	p_value = (i << p_bits);
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl;
}

Fixed &Fixed::operator=(const Fixed &t)
{
	std::cout << "Assignation operator called" << std::endl;
	this->p_value = ((Fixed &)t).getRawBits();
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
