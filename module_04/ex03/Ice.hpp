#ifndef ICE_HPP
#define ICE_HPP

#include <iostream>

class Ice : public AMateria
{
private:
public:
	Ice(std::string const &type);
	~Ice();
	void use(ICharacter &target);
};

Ice::Ice(std::string const &type) : AMateria(type)
{
}

Ice::~Ice()
{
}

void Ice::use(ICharacter &target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}

#endif
