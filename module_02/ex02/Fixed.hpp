#include <iostream>
#include <cmath>

class Fixed
{
private:
	int p_value;
	static const int p_bits = 8;

public:
	Fixed();
	Fixed(const Fixed &src);
	Fixed(const float f);
	Fixed(const int i);
	~Fixed();
	int getRawBits(void);
	Fixed &operator=(const Fixed &);
	Fixed &operator*(const Fixed &);
	Fixed &operator++(int);
	Fixed operator++();
	Fixed &operator--(int);
	Fixed operator--();
	float toFloat(void) const;
	int toInt(void) const;
	static Fixed max(Fixed, Fixed);
};

std::ostream &operator<<(std::ostream &out, const Fixed &);