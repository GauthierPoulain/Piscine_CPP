#ifndef SPAN_HPP
#define SPAN_HPP

#include <exception>
#include <vector>

class Span
{
private:
	std::vector<int> _vector;
	int _size;
	int _filled;

public:
	Span();
	Span(const Span &);
	Span &operator=(const Span &);
	~Span();
	void addNumber(int);
	int shortestSpan();
	int longestSpan();
	class FullFilledException : public std::exception
	{
		const char *what() const throw()
		{
			return "Vector is full";
		}
	};
};

#endif
