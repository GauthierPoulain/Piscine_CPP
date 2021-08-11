#ifndef ITER_HPP
#define ITER_HPP

#include <stddef.h>

template <typename T>
void iter(T *array, size_t size, void (*to_iter)(T))
{
	for (size_t i = 0; i < size; i++)
		to_iter(array[i]);
}

#endif
