#include "mutantstack.hpp"

// template <typename T>
template <class T>
MutantStack<T>::MutantStack()
{
}

// template <typename T>
template <class T>
MutantStack<T>::MutantStack(const MutantStack &src) : std::stack<T>(src)
{
}

// template <typename T>
template <class T>
MutantStack<T> &MutantStack<T>::operator=(const MutantStack &src)
{
	std::stack<T>::operator=(src);
	return *this;
}

// template <typename T>
template <class T>
MutantStack<T>::~MutantStack()
{
}

// template <typename T>
template <class T>
typename MutantStack<T>::iterator MutantStack<T>::begin()
{
	return this->c.begin();
}

// template <typename T>
template <class T>
typename MutantStack<T>::iterator MutantStack<T>::end()
{
	return this->c.end();
}


https://stackoverflow.com/questions/115703/storing-c-template-function-definitions-in-a-cpp-file