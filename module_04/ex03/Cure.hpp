#ifndef CURE_HPP
#define CURE_HPP

#include <iostream>
#include "./AMateria.hpp"
#include "./ICharacter.hpp"

class Cure : public AMateria
{
private:
public:
	Cure(void);
	Cure(std::string const &type);
	virtual ~Cure();
	virtual void use(ICharacter &target);
	virtual AMateria *clone() const;
};

#endif
