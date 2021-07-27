#include "MateriaSource.hpp"
#include "./Ice.hpp"
#include "./Cure.hpp"

t_list *ft_lstnew(AMateria *content)
{
	t_list *lst;

	lst = new t_list;
	lst->materia = content;
	lst->next = 0;
	return (lst);
}

void ft_lstadd_back(t_list **alst, t_list *new_el)
{
	t_list *last;

	if (!*alst)
		*alst = new_el;
	else
	{
		last = *alst;
		while (last->next)
			last = last->next;
		last->next = new_el;
	}
}

void ft_lstclear(t_list **lst)
{
	t_list *tmp;

	if (*lst)
	{
		while (*lst)
		{
			tmp = (*lst)->next;
			if ((*lst)->materia)
			{
				delete (*lst)->materia;
				(*lst)->materia = 0;
			}
			delete (*lst);
			*lst = tmp;
		}
	}
}

MateriaSource::MateriaSource()
{
	for (size_t i = 0; i < _maxLearnedMateria; i++)
		_learnedMateria[i] = 0;
	_gc = 0;
}

MateriaSource::~MateriaSource()
{
	ft_lstclear(&_gc);
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
			AMateria *salut = _learnedMateria[i]->clone();
			ft_lstadd_back(&_gc, ft_lstnew(salut));
			return salut;
		}
	}
	return 0;
}
