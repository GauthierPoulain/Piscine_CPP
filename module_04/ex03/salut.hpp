#ifndef SALUT_HPP
#define SALUT_HPP

#include "./AMateria.hpp"

typedef struct s_list
{
	AMateria *materia;
	struct s_list *next;
} t_list;

t_list *ft_lstnew(AMateria *content);
void ft_lstadd_back(t_list **alst, t_list *new_el);
void ft_lstclear(t_list **lst);

#endif