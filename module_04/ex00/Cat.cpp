#include "./Cat.hpp"

Cat::Cat() : Animal("Cat")
{
}

Cat::Cat(const Cat &src)
{
	*this = src;
}

Cat &Cat::operator=(const Cat &src)
{
	p_type = src.p_type;
	return *this;
}

Cat::~Cat()
{
}

void Cat::makeSound() const
{
	std::cout << "Meowwwww" << std::endl;
}
