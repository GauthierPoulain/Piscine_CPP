#include "Fixed.hpp"
#include <iostream>

Fixed::Fixed(void)
{
	p_value = 0;
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &)
{
	std::cout << "Copy constructor called" << std::endl;
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

Fixed &Fixed::operator=(Fixed &t)
{
	std::cout << "Assignation operator called" << std::endl;
	return t;
}
