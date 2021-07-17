#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

class WrongCat
{
private:
public:
	WrongCat();
	WrongCat(const WrongCat &);
	WrongCat &operator=(const WrongCat &);
	~WrongCat();
};

WrongCat::WrongCat()
{
}

WrongCat::WrongCat(const WrongCat &src)
{
	*this = src;
}

WrongCat &WrongCat::operator=(const WrongCat &src)
{
	return *this;
}

WrongCat::~WrongCat()
{
}

#endif
