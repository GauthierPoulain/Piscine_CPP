#include "Zombie.hpp"

void Zombie::setName(std::string name)
{
	p_name = name;
}

void Zombie::setType(std::string type)
{
	p_type = type;
}

void Zombie::advert(void)
{
	std::cout << "<" << p_name << " (" << p_type << ")> Braiiiiiiinnnssss ..." << std::endl;
}

static std::string gen_random(const int len)
{
	std::string tmp_s;
	static const char alphanum[] =
		"0123456789"
		"ABCDEFGHIJKLMNOPQRSTUVWXYZ"
		"abcdefghijklmnopqrstuvwxyz";
	tmp_s.reserve(len);
	for (int i = 0; i < len; ++i)
		tmp_s += alphanum[rand() % (sizeof(alphanum) - 1)];
	return tmp_s;
}

Zombie *Zombie::randomChump(void)
{
	Zombie *ret;
	std::string str;

	ret = new Zombie;
	ret->setName(gen_random(10));
	ret->setType(p_type);
	return (ret);
}