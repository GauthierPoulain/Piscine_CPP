#include "./AMateria.hpp"

AMateria::AMateria(std::string const &type)
{
	_type = type;
}

AMateria::~AMateria()
{
}

std::string const &AMateria::getType() const
{
	return _type;
}

void AMateria::use(ICharacter &target)
{
	(void)target;
}
