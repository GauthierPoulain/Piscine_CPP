class Fixed
{
private:
	float p_value;
	static const int p_bits = 8;

public:
	Fixed();
	Fixed(const Fixed &src);
	Fixed(const float f);
	~Fixed();
	void setRawBits(int const raw);
	int getRawBits(void) const;
	Fixed &operator=(const Fixed &t);
	float toFloat(void);
	int toInt(void);
};
