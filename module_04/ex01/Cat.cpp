#include "./Cat.hpp"

Cat::Cat() : Animal("Cat"), p_brain(new Brain())
{
	std::cout << "new default Cat" << std::endl;
}

Cat::Cat(const Cat &src)
{
	std::cout << "copy Cat" << std::endl;
	p_type = src.p_type;
	p_brain = new Brain(*src.p_brain);
}

Cat &Cat::operator=(const Cat &src)
{
	std::cout << "assign Cat" << std::endl;
	p_type = src.p_type;
	p_brain = src.p_brain;
	return *this;
}

Cat::~Cat()
{
	delete p_brain;
	std::cout << "Cat destroyed" << std::endl;
}

void Cat::makeSound() const
{
	std::cout << "Meowwwww" << std::endl;
}

std::string &Cat::getIdea(int index)
{
	return p_brain->getIdea(index);
}

std::string *Cat::getIdeas()
{
	return p_brain->getIdeas();
}

void Cat::setIdea(int index, const std::string &idea)
{
	p_brain->setIdea(index, idea);
}
