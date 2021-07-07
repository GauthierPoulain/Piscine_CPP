#include <string>

class ScavTrap
{
private:
	std::string p_name;
	int p_hitPoints = 100;
	int p_energyPoints = 50;
	unsigned int p_attackDamages = 20;

public:
	ScavTrap(std::string name);
	~ScavTrap();
	void attack(std::string const &target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
};
