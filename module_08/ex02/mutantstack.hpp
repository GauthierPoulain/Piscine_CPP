#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <stack>

template <typename T>
class MutantStack
{
private:
public:
	MutantStack();
	MutantStack(const MutantStack &);
	MutantStack(const std::stack<T> &);
	MutantStack &operator=(const MutantStack &);
	~MutantStack();
};

template <typename T>
MutantStack<T>::MutantStack()
{
}

template <typename T>
MutantStack<T>::~MutantStack()
{
}

#endif
