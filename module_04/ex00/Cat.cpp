#include "./Cat.hpp"

Cat::Cat() : Animal("Cat")
{
	std::cout << "new default Cat" << std::endl;
}

Cat::Cat(const Cat &src)
{
	std::cout << "copy Cat" << std::endl;
	*this = src;
}

Cat &Cat::operator=(const Cat &src)
{
	std::cout << "assign Cat" << std::endl;
	p_type = src.p_type;
	return *this;
}

Cat::~Cat()
{
	std::cout << "Cat destroyed" << std::endl;
}

void Cat::makeSound() const
{
	std::cout << "Meowwwww" << std::endl;
}
