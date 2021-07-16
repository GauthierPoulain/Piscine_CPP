#ifndef DOG_HPP
#define DOG_HPP

class Dog
{
private:
public:
	Dog();
	Dog(const Dog &);
	Dog &operator=(const Dog &);
	~Dog();
};

Dog::Dog()
{
}

Dog::Dog(const Dog &src)
{
	*this = src;
}

Dog &Dog::operator=(const Dog &src)
{
	return *this;
}

Dog::~Dog()
{
}

#endif
