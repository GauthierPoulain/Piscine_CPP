#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include <string>
#include "./AMateria.hpp"
#include "./ICharacter.hpp"

class Character : public ICharacter
{
private:
	std::string _name;
	// AMateria *_inventory[4];

public:
	Character();
	Character(std::string const &name);
	~Character();
	std::string const &getName() const;
	virtual void equip(AMateria *m);
	virtual void unequip(int idx);
	virtual void use(int idx, ICharacter &target);
};

Character::Character()
{
}

Character::Character(std::string const &name)
{
	_name = name;
}

Character::~Character()
{
}

std::string const &Character::getName() const
{
	return _name;
}

void Character::equip(AMateria *m)
{
	(void)m;
}

void Character::unequip(int idx)
{
	(void)idx;
}

void Character::use(int idx, ICharacter &target)
{
	(void)idx;
	(void)target;
}

#endif
