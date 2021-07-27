#include "./Animal.hpp"

Animal::Animal()
{
	std::cout << "new default Animal" << std::endl;
	p_type = "";
}

Animal::Animal(const std::string &type)
{
	std::cout << "new Animal: " << type << std::endl;
	p_type = type;
}

Animal::Animal(const Animal &src)
{
	std::cout << "copy Animal: " << src.getType() << std::endl;
	*this = src;
}

Animal &Animal::operator=(const Animal &src)
{
	std::cout << "assign Animal: " << src.getType() << std::endl;
	this->p_type = src.p_type;
	return *this;
}

Animal::~Animal()
{
	std::cout << "Animal destroyed" << std::endl;
}

std::string Animal::getType() const
{
	return p_type;
}

void Animal::makeSound() const
{
	std::cout << "Unknown sound" << std::endl;
}
