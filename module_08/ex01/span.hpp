#ifndef SPAN_HPP
#define SPAN_HPP

#include <exception>
#include <vector>
#include <algorithm>

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
	void addNumber(int);
	int shortestSpan(void);
	int longestSpan(void);
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
