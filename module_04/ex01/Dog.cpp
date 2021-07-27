#include "./Dog.hpp"

Dog::Dog() : Animal("Dog"), p_brain(new Brain())
{
	std::cout << "new default Dog" << std::endl;
}

Dog::Dog(const Dog &src)
{
	std::cout << "copy Dog" << std::endl;
	p_type = src.p_type;
	p_brain = new Brain(*src.p_brain);
}

Dog &Dog::operator=(const Dog &src)
{
	std::cout << "assign Dog" << std::endl;
	p_type = src.p_type;
	p_brain = new Brain(*src.p_brain);
	return *this;
}

Dog::~Dog()
{
	delete p_brain;
	std::cout << "Dog destroyed" << std::endl;
}

void Dog::makeSound() const
{
	std::cout << "Bark!" << std::endl;
}

std::string &Dog::getIdea(int index)
{
	return p_brain->getIdea(index);
}

std::string *Dog::getIdeas()
{
	return p_brain->getIdeas();
}

void Dog::setIdea(int index, const std::string &idea)
{
	p_brain->setIdea(index, idea);
}