#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <exception>

template <typename T>
class Array
{
private:
	T *_array;
	size_t _size;

public:
	class OutOfLimitsException : public std::exception
	{
		const char *what() const throw()
		{
			return "index out of limits";
		}
	};
	Array() : _array(new T[0]), _size(0) {}
	Array(unsigned int n) : _array(new T[n]), _size(n) {}
	Array &
	operator=(const Array &src)
	{
		_size = src._size;
		_array = new T[_size];
		for (size_t i = 0; i < src._size; i++)
			_array[i] = src._array[i];
		return *this;
	}
	Array(const Array &src)
	{
		_size = src._size;
		_array = new T[_size];
		for (size_t i = 0; i < src._size; i++)
			_array[i] = src._array[i];
	}
	T &operator[](size_t idx)
	{
		if (idx < 0 || idx >= _size)
			throw OutOfLimitsException();
		return _array[idx];
	}
	~Array()
	{
		delete[] _array;
	}
	size_t size(void)
	{
		return _size;
	}
};

#endif
