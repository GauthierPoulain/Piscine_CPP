#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "./ICharacter.hpp"

class Character : public ICharacter
{
protected:
	std::string _name;

public:
	Character();
	~Character();
};

Character::Character()
{
}

Character::~Character()
{
}

#endif
