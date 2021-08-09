#include <iostream>
#include <stdlib.h>
#include <time.h>

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base *generate(void)
{
	srand(time(NULL));
	switch (rand() % 3)
	{
	case 0:
		std::cout << "generate new A" << std::endl;
		return (new A);
	case 1:
		std::cout << "generate new B" << std::endl;
		return (new B);
	case 2:
		std::cout << "generate new C" << std::endl;
		return (new C);
	default:
		return (0);
	}
}

void identify(Base *p)
{
	if (dynamic_cast<A *>(p))
		std::cout << "A" << std::endl;
	else if (dynamic_cast<B *>(p))
		std::cout << "B" << std::endl;
	else if (dynamic_cast<C *>(p))
		std::cout << "C" << std::endl;
}

// void identify(Base &p)
// {
// }

int main(void)
{
	Base *ptr = generate();
	identify(ptr);
	delete ptr;
	return (0);
}