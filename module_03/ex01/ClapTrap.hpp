#include <string>

class ClapTrap
{
private:
	std::string p_name;
	int p_hitPoints = 100;
	int p_energyPoints = 50;
	unsigned int p_attackDamages = 2;

public:
	ClapTrap(std::string name);
	~ClapTrap();
	void attack(std::string const &target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
};
