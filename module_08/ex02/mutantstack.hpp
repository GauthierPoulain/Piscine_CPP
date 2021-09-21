#pragma once

#include <stack>
#include <iterator>
#include <vector>

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

template <typename T>
MutantStack<T>::MutantStack()
{
}

template <typename T>
MutantStack<T>::MutantStack(const MutantStack &src) : std::stack<T>(src)
{
}

template <typename T>
MutantStack<T> &MutantStack<T>::operator=(const MutantStack &src)
{
	std::stack<T>::operator=(src);
	return *this;
}

template <typename T>
MutantStack<T>::~MutantStack()
{
}

template <typename T>
typename MutantStack<T>::iterator MutantStack<T>::begin()
{
	return this->c.begin();
}

template <typename T>
typename MutantStack<T>::iterator MutantStack<T>::end()
{
	return this->c.end();
}
