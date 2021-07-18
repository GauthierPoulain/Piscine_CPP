#include "./Dog.hpp"

Dog::Dog() : Animal("Dog")
{
	std::cout << "new default Dog" << std::endl;
}

Dog::Dog(const Dog &src)
{
	std::cout << "copy Dog" << std::endl;
	*this = src;
}

Dog &Dog::operator=(const Dog &src)
{
	std::cout << "assign Dog" << std::endl;
	p_type = src.p_type;
	return *this;
}

Dog::~Dog()
{
	std::cout << "Dog destroyed" << std::endl;
}

void Dog::makeSound() const
{
	std::cout << "Bark!" << std::endl;
}