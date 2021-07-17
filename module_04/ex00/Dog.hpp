#ifndef DOG_HPP
#define DOG_HPP

#include "./Animal.hpp"

class Dog : public Animal
{
private:
public:
	Dog();
	Dog(const Dog &);
	Dog &operator=(const Dog &);
	~Dog();
};

Dog::Dog() : Animal("dog")
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

#endif
