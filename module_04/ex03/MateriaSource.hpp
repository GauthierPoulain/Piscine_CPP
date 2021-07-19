#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include <string>
#include "./AMateria.hpp"
#include "./IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
private:
public:
	MateriaSource();
	~MateriaSource();
	void learnMateria(AMateria *);
	AMateria *createMateria(std::string const &type);
};

MateriaSource::MateriaSource()
{
}

MateriaSource::~MateriaSource()
{
}

void MateriaSource::learnMateria(AMateria *src)
{
	(void)src;
}

AMateria *MateriaSource::createMateria(std::string const &type)
{
	if (type == "ice")
		return new Ice();
	else if (type == "cure")
		return new Cure();
	else
		return nullptr;
}

#endif
