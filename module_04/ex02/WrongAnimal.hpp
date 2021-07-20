#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <string>
#include <iostream>

class WrongAnimal
{
protected:
	std::string p_type;

public:
	WrongAnimal();
	WrongAnimal(const std::string &type);
	WrongAnimal(const WrongAnimal &);
	virtual ~WrongAnimal();
	virtual WrongAnimal &operator=(const WrongAnimal &);
	std::string getType() const;
	virtual void makeSound() const;
};



#endif
