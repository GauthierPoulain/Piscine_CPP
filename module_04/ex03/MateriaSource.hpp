#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include <string>
#include "./AMateria.hpp"
#include "./IMateriaSource.hpp"

typedef struct s_list
{
	AMateria *materia;
	struct s_list *next;
} t_list;

class MateriaSource : public IMateriaSource
{
private:
	static const int _maxLearnedMateria = 4;
	AMateria *_learnedMateria[4];
	t_list *_gc;

public:
	MateriaSource();
	~MateriaSource();
	void learnMateria(AMateria *);
	AMateria *createMateria(std::string const &type);
};

#endif
