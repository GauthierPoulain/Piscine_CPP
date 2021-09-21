#include "span.hpp"

Span::Span()
{
}

Span::~Span()
{
}

Span::Span(unsigned int n) : _size(n), _filled(0)
{
	_vector = std::vector<int>(_size);
}

Span::Span(const Span &src)
{
	*this = src;
}

Span &Span::operator=(const Span &src)
{
	_size = src._size;
	_filled = src._filled;
	_vector = src._vector;
	return *this;
}

void Span::addNumber(int nb)
{
	if (_filled >= _size)
		throw Span::FullFilledException();
	else
		_vector[_filled++] = nb;
}

void Span::addRange(std::vector<int>::iterator start, std::vector<int>::iterator end)
{
	while (start != end)
		_vector[_filled++] = *start++;
}

int Span::shortestSpan(void)
{
	if (!_filled)
		throw Span::NoFilledException();
	else
	{
		std::sort(_vector.begin(), _vector.begin() + _filled);
		std::vector<int>::iterator it = _vector.begin();
		int result = *(it + 1) - *it;
		size_t idx = 0;
		while (++it + 1 != _vector.begin() + _filled && idx++ < _filled)
			result = std::min(result, *it - *(it - 1));
		return result;
	}
}

int Span::longestSpan(void)
{
	if (_filled <= 1)
		throw Span::NoFilledException();
	else
	{
		std::sort(_vector.begin(), _vector.begin() + _filled);
		int max = *(std::max_element(_vector.begin(), _vector.begin() + _filled));
		int min = *(std::min_element(_vector.begin(), _vector.begin() + _filled));
		return max - min;
	}
}

void Span::print()
{
	for (size_t i = 0; i < _filled; i++)
		std::cout << i << " : " << _vector[i] << std::endl;
}
