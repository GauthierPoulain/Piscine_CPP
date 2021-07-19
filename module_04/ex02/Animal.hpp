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
	virtual Animal &operator=(const Animal &);
	virtual ~Animal() = 0;
	std::string getType() const;
	virtual void makeSound() const;
};

#endif
