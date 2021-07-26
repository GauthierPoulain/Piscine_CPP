#include "MateriaSource.hpp"
#include "./Ice.hpp"
#include "./Cure.hpp"

MateriaSource::MateriaSource()
{
	for (size_t i = 0; i < _maxLearnedMateria; i++)
		_learnedMateria[i] = 0;
}

MateriaSource::~MateriaSource()
{
	for (size_t i = 0; i < _maxLearnedMateria; i++)
	{
		if (_learnedMateria[i])
			delete _learnedMateria[i];
	}
}

void MateriaSource::learnMateria(AMateria *src)
{
	for (size_t i = 0; i < _maxLearnedMateria; i++)
	{
		if (!_learnedMateria[i])
		{
			_learnedMateria[i] = src;
			break;
		}
	}
}

AMateria *MateriaSource::createMateria(std::string const &type)
{
	for (size_t i = 0; i < _maxLearnedMateria; i++)
	{
		if (type == _learnedMateria[i]->getType())
		{
			return _learnedMateria[i]->clone();
		}
	}
	return 0;
}
