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
	~Character();
	std::string const &getName() const;
};

Character::Character()
{
}

Character::~Character()
{
}

std::string const &Character::getName() const
{
	return _name;
}

#endif
