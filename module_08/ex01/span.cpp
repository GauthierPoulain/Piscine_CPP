#include "span.hpp"

void Span::addNumber(int nb)
{
	if (_filled >= _size)
		throw Span::FullFilledException();
	else
	{
		_vector[_filled] = nb;
		_filled++;
	}
}
