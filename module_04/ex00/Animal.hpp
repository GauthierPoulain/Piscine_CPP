#ifndef ANIMAL_HPP
#define ANIMAL_HPP

class Animal
{
private:
public:
	Animal();
	Animal(const Animal &);
	Animal &operator=(const Animal &);
	~Animal();
};

Animal::Animal()
{
}

Animal::Animal(const Animal &src)
{
	*this = src;
}

Animal &Animal::operator=(const Animal &src)
{
	return *this;
}

Animal::~Animal()
{
}

#endif
