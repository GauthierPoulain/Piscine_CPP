#include "./Ice.hpp"

Ice::Ice(void) : AMateria("Ice")
{
}

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

AMateria *Ice::clone() const
{
	Ice *tmp = new Ice();
	tmp->_type = _type;
	return tmp;
}