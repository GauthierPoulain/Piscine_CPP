#include "./Character.hpp"

Character::Character()
{
	for (size_t i = 0; i < _maxInventory; i++)
		_inventory[i] = 0;
}

Character::Character(std::string const &name)
{
	_name = name;
	for (size_t i = 0; i < _maxInventory; i++)
		_inventory[i] = 0;
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
	for (size_t i = 0; i < _maxInventory; i++)
	{
		if (!_inventory[i])
		{
			_inventory[i] = m;
			break;
		}
	}

	(void)m;
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
