#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <string>
#include <iostream>

class Animal
{
protected:
	std::string p_type;

public:
	virtual Animal &operator=(const Animal &) const = 0;
	virtual ~Animal() = 0;
	virtual std::string getType() const = 0;
	virtual void makeSound() const = 0;
};

#endif
