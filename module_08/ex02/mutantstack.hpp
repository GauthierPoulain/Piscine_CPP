#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <stack>
#include <iterator>
#include <list>

template <typename T>
class MutantStack : public std::stack<T>
{
public:
	typedef typename std::stack<T>::container_type::iterator iterator;
	MutantStack();
	MutantStack(const MutantStack &);
	MutantStack &operator=(const MutantStack &);
	~MutantStack();
	iterator begin();
	iterator end();
};

#endif
