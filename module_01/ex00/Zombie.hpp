#include <string>

class Zombie
{
private:
	std::string p_name;

public:
	Zombie();
	Zombie(std::string name);
	~Zombie();
	void setName(std::string name);
	void announce(void);
};
