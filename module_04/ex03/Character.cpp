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
	for (size_t i = 0; i < _maxInventory; i++)
		if (_inventory[i])
			delete _inventory[i];
}

#include <iostream>

Character &Character::operator=(const Character &src)
{
	std::cout << "assign" << std::endl;
	for (size_t i = 0; i < _maxInventory; i++)
		_inventory[i] = 0;
	_name = src.getName() + "_copy";
	return *this;
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
}

void Character::unequip(int idx)
{
	delete _inventory[idx];
	_inventory[idx] = 0;
}

void Character::use(int idx, ICharacter &target)
{
	if (idx < _maxInventory && _inventory[idx])
		_inventory[idx]->use(target);
}
