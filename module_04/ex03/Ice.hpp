#ifndef ICE_HPP
#define ICE_HPP

#include <iostream>
#include "./AMateria.hpp"
#include "./ICharacter.hpp"

class Ice : public AMateria
{
private:
public:
	Ice(void);
	Ice(std::string const &type);
	virtual ~Ice();
	virtual void use(ICharacter &target);
};

#endif
