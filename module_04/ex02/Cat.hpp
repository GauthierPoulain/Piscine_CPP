#ifndef CAT_HPP
#define CAT_HPP

#include "./Animal.hpp"
#include "./Brain.hpp"

class Cat : public Animal
{
private:
	Brain *p_brain;

public:
	Cat();
	Cat(const Cat &);
	Cat &operator=(const Cat &);
	~Cat();
	void makeSound() const;
	std::string &getIdea(int index);
	std::string *getIdeas();
	void setIdea(int index, const std::string &idea);
};

#endif
