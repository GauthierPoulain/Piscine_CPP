#ifndef DOG_HPP
#define DOG_HPP

#include "./Animal.hpp"
#include "./Brain.hpp"

class Dog : public Animal
{
private:
	Brain *p_brain;

public:
	Dog();
	Dog(const Dog &);
	Dog &operator=(const Dog &);
	~Dog();
	void makeSound() const;
	std::string &getIdea(int index);
	std::string *getIdeas();
	void setIdea(int index, const std::string &idea);
	
};

#endif
