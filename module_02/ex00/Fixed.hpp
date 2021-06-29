class Fixed
{
private:
	int p_value;
	static const int p_num = 8;

public:
	Fixed();
	Fixed(const Fixed &);
	~Fixed();
	void setRawBits(int const raw);
	int getRawBits(void) const;
	Fixed &operator=(Fixed &t);
};
