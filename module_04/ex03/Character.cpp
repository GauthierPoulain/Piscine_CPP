#include "./Character.hpp"
#include <iostream>

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
				t_list *salut = tmp;
				while (salut && salut->materia)
				{
					if (salut->materia == (*lst)->materia)
						salut->materia = 0;
					salut = salut->next;
				}
				delete (*lst)->materia;
				(*lst)->materia = 0;
			}
			delete (*lst);
			*lst = tmp;
		}
	}
}

Character::Character()
{
	for (size_t i = 0; i < _maxInventory; i++)
		_inventory[i] = 0;
	_gc = 0;
}

Character::Character(std::string const &name)
{
	_name = name;
	for (size_t i = 0; i < _maxInventory; i++)
		_inventory[i] = 0;
	_gc = 0;
}

Character::~Character()
{
	ft_lstclear(&_gc);
}

Character &Character::operator=(const Character &src)
{
	std::cout << "assign" << std::endl;
	for (size_t i = 0; i < _maxInventory; i++)
		_inventory[i] = 0;
	_name = src.getName() + "_copy";
	_gc = 0;
	return *this;
}

std::string const &Character::getName() const
{
	return _name;
}

void Character::equip(AMateria *m)
{
	ft_lstadd_back(&_gc, ft_lstnew(m));
	for (size_t i = 0; i < _maxInventory; i++)
	{
		if (!_inventory[i])
		{
			_inventory[i] = m;
			break;
		}
	}
}

void Character::unequip(int idx)
{
	_inventory[idx] = 0;
}

void Character::use(int idx, ICharacter &target)
{
	if (idx < _maxInventory && _inventory[idx])
		_inventory[idx]->use(target);
}
