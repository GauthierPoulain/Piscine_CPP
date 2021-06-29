#include "Fixed.hpp"
#include <iostream>
#include <cmath>

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
	p_value = f;
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return p_value;
}

void Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits member function called" << std::endl;
	p_value = raw;
}

Fixed &Fixed::operator=(const Fixed &t)
{
	std::cout << "Assignation operator called" << std::endl;
	this->p_value = t.getRawBits();
	return *this;
}

float Fixed::toFloat(void)
{
}

int Fixed::toInt(void)
{
}