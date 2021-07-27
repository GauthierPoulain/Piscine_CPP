#include "./WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal("WrongCat")
{
	std::cout << "new default WrongCat" << std::endl;
}

WrongCat::WrongCat(const WrongCat &src)
{
	std::cout << "copy WrongCat" << std::endl;
	*this = src;
}

WrongCat &WrongCat::operator=(const WrongCat &src)
{
	std::cout << "assign WrongCat: " << src.getType() << std::endl;
	p_type = src.p_type;
	return *this;
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat destroyed" << std::endl;
}

void WrongCat::makeSound() const
{
	std::cout << "wierd moo sound" << std::endl;
}
