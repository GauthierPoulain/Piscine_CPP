#include "./WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	std::cout << "new default WrongAnimal" << std::endl;
}

WrongAnimal::WrongAnimal(const std::string &type)
{
	std::cout << "new WrongAnimal: " << type << std::endl;
	p_type = type;
}

WrongAnimal::WrongAnimal(const WrongAnimal &src)
{
	std::cout << "copy WrongAnimal" << std::endl;
	p_type = src.p_type;
	*this = src;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &src)
{
	std::cout << "assign WrongAnimal: " << src.getType() << std::endl;
	p_type = src.p_type;
	return *this;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal destroyed" << std::endl;
}

std::string WrongAnimal::getType() const
{
	return p_type;
}

void WrongAnimal::makeSound() const
{
	std::cout << "wierd animal sound" << std::endl;
}
