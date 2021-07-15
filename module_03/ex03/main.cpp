#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int main(void)
{
	{
		ClapTrap roger("roger");
		ClapTrap christian("christiant");

		roger.print_status();
		christian.print_status();
		roger.attack("skag");
		roger.takeDamage(2);
		roger.attack("skag");
		roger.takeDamage(3);
		roger.attack("skag");
		roger.takeDamage(5);
		christian.attack("skag");
		christian.takeDamage(2);
		christian.beRepaired(2);
		roger.print_status();
		christian.print_status();
	}
	{
		ScavTrap henry("henry");
		henry.guardGate();
		henry.print_status();
	}
	{
		FragTrap donatien("donatien");
		donatien.highFivesGuys();
		donatien.print_status();
	}
	{
		DiamondTrap philibert("philibert");

		DiamondTrap philou = philibert;

		philou.whoAmI();
		philou.print_status();

		philibert.whoAmI();
		philibert.print_status();
	}
	return 0;
}
