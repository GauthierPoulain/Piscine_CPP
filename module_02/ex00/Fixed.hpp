#ifndef FIXED_HPP
#define FIXED_HPP

class Fixed
{
private:
	int p_value;
	static const int p_bits = 8;

public:
	Fixed();
	Fixed(const Fixed &src);
	~Fixed();
	void setRawBits(int const raw);
	int getRawBits(void) const;
	Fixed &operator=(const Fixed &t);
};

#endif