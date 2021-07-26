#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include <string>
#include "./AMateria.hpp"
#include "./ICharacter.hpp"

typedef struct s_list
{
	AMateria *materia;
	struct s_list *next;
} t_list;

class Character : public ICharacter
{
private:
	std::string _name;
	static const int _maxInventory = 4;
	AMateria *_inventory[4];
	t_list *_gc;

public:
	Character();
	Character(std::string const &name);
	~Character();
	virtual Character &operator=(const Character &);
	std::string const &getName() const;
	virtual void equip(AMateria *m);
	virtual void unequip(int idx);
	virtual void use(int idx, ICharacter &target);
};

#endif
