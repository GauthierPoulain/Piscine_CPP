#include "./Dog.hpp"

Dog::Dog() : Animal("Dog")
{
}

Dog::Dog(const Dog &src)
{
	*this = src;
}

Dog &Dog::operator=(const Dog &src)
{
	p_type = src.p_type;
	return *this;
}

Dog::~Dog()
{
}

void Dog::makeSound() const
{
	std::cout << "Bark!" << std::endl;
}