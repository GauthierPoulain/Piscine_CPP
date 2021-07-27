#include "./Brain.hpp"

Brain::Brain()
{
}

Brain::Brain(const Brain &src)
{
	for (size_t i = 0; i < 100; i++)
		this->p_ideas[i] = src.p_ideas[i];
}

Brain &Brain::operator=(const Brain &src)
{
	for (size_t i = 0; i < 100; i++)
		this->p_ideas[i] = src.p_ideas[i];
	return *this;
}

Brain::~Brain()
{
}

std::string &Brain::getIdea(int index)
{
	return p_ideas[index];
}

std::string *Brain::getIdeas()
{
	return p_ideas;
}

void Brain::setIdea(int index, std::string value)
{
	p_ideas[index] = value;
}
