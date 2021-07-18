#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <string>

class Brain
{
private:
	std::string p_ideas[100];

public:
	Brain();
	Brain(const Brain &);
	Brain &operator=(const Brain &);
	~Brain();
	std::string &getIdea(int index);
	std::string *getIdeas();
	void setIdea(int index, std::string);
};

#endif
