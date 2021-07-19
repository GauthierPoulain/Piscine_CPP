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
};

MateriaSource::MateriaSource()
{
}

MateriaSource::~MateriaSource()
{
}

#endif
