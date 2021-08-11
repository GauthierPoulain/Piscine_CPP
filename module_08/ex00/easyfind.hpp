#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <exception>
#include <algorithm>
#include <vector>

class NotFoundException : public std::exception
{
	const char *what() const throw()
	{
		return "can't find given argument in container";
	}
};

template <typename T>
int &easyfind(T container, int to_find)
{
	typename T::iterator iterator;

	iterator = std::find(container.begin(), container.end(), to_find);
	if (iterator != container.end())
		return *iterator;
	else
		throw NotFoundException();
}

#endif
