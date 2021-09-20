// clang++ -Wall -Wextra -Werror -g -std=c++98 -fsanitize=address main.cpp mutantstack.cpp && ./a.out

#include <iostream>
#include <stack>
#include "mutantstack.hpp"

// int main()
// {
// 	MutantStack<int> mstack;

// 	mstack.push(5);
// 	mstack.push(17);

// 	std::cout << "top " << mstack.top() << std::endl;

// 	mstack.pop();

// 	std::cout << "size " << mstack.size() << std::endl;

// 	mstack.push(3);
// 	mstack.push(5);
// 	mstack.push(737);
// 	//[...]
// 	mstack.push(0);

// 	MutantStack<int>::iterator it = mstack.begin();
// 	MutantStack<int>::iterator ite = mstack.end();

// 	++it;
// 	--it;
// 	while (it != ite)
// 	{
// 		std::cout << *it << std::endl;
// 		++it;
// 	}
// 	std::stack<int> s(mstack);
// 	return 0;
// }

int main()
{
	try
	{
		MutantStack<int> mstack;

		mstack.push(10);

		MutantStack<int>::iterator it = mstack.begin();

		std::cout << &(it) << std::endl;

		MutantStack<int>::iterator ite = mstack.end();
		std::cout << &(ite) << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << '\n';
	}
}