#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int main(void)
{
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
	}
	{
		ScavTrap henry("henry");
		henry.guardGate();
	}
	{
		FragTrap donatien("donatien");
		donatien.highFivesGuys();
	}
	{
		DiamondTrap philibert("philibert");

		philibert.whoAmI();
		philibert.print_status();
	}
	return 0;
}
