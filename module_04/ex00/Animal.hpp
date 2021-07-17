#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <string>
#include <iostream>

class Animal
{
protected:
	std::string p_type;

public:
	Animal();
	Animal(const std::string &type);
	Animal(const Animal &);
	Animal &operator=(const Animal &);
	~Animal();
	std::string getType() const;
	void makeSound() const;
};

Animal::Animal()
{
}

Animal::Animal(const std::string &type)
{
	p_type = type;
}

Animal::Animal(const Animal &src)
{
	*this = src;
}

Animal &Animal::operator=(const Animal &src)
{
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
	if (p_type == "cat")
		std::cout << "Meow" << std::endl;
	else if (p_type == "dog")
		std::cout << "Woof" << std::endl;
	else
		std::cout << "Unknown sound" << std::endl;
}

#endif
