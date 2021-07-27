#include "MateriaSource.hpp"
#include "./Ice.hpp"
#include "./Cure.hpp"

MateriaSource::MateriaSource()
{
	for (size_t i = 0; i < _maxLearnedMateria; i++)
		_learnedMateria[i] = 0;
	_gc = 0;
}

MateriaSource::~MateriaSource()
{
	// for (size_t i = 0; i < _maxLearnedMateria; i++)
	// {
	// 	if (_learnedMateria[i])
	// 		delete _learnedMateria[i];
	// }
	ft_lstclear(&_gc);
}

void MateriaSource::learnMateria(AMateria *src)
{
	AMateria *tmp = src->clone();
	ft_lstadd_back(&_gc, ft_lstnew(tmp));
	for (size_t i = 0; i < _maxLearnedMateria; i++)
	{
		if (!_learnedMateria[i])
		{
			_learnedMateria[i] = tmp;
			break;
		}
	}
	delete src;
}

AMateria *MateriaSource::createMateria(std::string const &type)
{
	for (size_t i = 0; i < _maxLearnedMateria; i++)
	{
		if (type == _learnedMateria[i]->getType())
			return _learnedMateria[i]->clone();
	}
	return 0;
}
