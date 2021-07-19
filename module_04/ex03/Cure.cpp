#include "./Cure.hpp"

Cure::Cure(void) : AMateria("Cure")
{
}

Cure::Cure(std::string const &type) : AMateria(type)
{
}

Cure::~Cure()
{
}

void Cure::use(ICharacter &target)
{
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}
AMateria *Cure::clone() const
{
	Cure *tmp = new Cure();
	tmp->_type = _type;
	return tmp;
}