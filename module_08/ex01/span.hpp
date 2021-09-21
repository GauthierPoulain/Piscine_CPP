#ifndef SPAN_HPP
#define SPAN_HPP

#include <exception>
#include <vector>
#include <algorithm>
#include <iostream>

class Span
{
private:
	std::vector<int> _vector;
	unsigned int _size;
	unsigned int _filled;

public:
	Span(void);
	Span(unsigned int);
	Span(const Span &);
	Span &operator=(const Span &);
	~Span(void);

	std::vector<int>::iterator begin() { return _vector.begin(); }
	std::vector<int>::iterator end() { return _vector.begin() + _filled; }

	void addNumber(int);
	void addRange(std::vector<int>::iterator, std::vector<int>::iterator);
	int shortestSpan(void);
	int longestSpan(void);
	void print(void);
	class NoFilledException : public std::exception
	{
		const char *what() const throw()
		{
			return "Vector is empty";
		}
	};
	class FullFilledException : public std::exception
	{
		const char *what() const throw()
		{
			return "Vector is full";
		}
	};
};

#endif
