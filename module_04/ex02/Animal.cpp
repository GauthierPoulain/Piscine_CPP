#include "./Animal.hpp"

Animal &Animal::operator=(const Animal &src) const
{
	std::cout << "assign Animal: " << src.getType() << std::endl;
	p_type = src.p_type;
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
