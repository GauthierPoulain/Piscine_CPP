#ifndef CAT_HPP
#define CAT_HPP

#include "./Animal.hpp"

class Cat : public Animal
{
private:
public:
	Cat();
	Cat(const Cat &);
	Cat &operator=(const Cat &);
	~Cat();
};

Cat::Cat()
{
}

Cat::Cat(const Cat &src)
{
	*this = src;
}

Cat &Cat::operator=(const Cat &src)
{
	return *this;
}

Cat::~Cat()
{
}

#endif
