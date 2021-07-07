#include "ClapTrap.hpp"

int main(void)
{
	ClapTrap roger("roger");
	ClapTrap christian("christiant");

	roger.attack("skag");
	roger.takeDamage(2);
	roger.attack("skag");
	roger.takeDamage(3);
	roger.attack("skag");
	roger.takeDamage(5);
	christian.attack("skag");
	christian.takeDamage(2);
	christian.beRepaired(2);

	return 0;
}
