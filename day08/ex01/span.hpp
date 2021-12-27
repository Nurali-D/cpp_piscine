#include <iostream>
#include <algorithm>
#include <vector>
#include <climits>

#ifndef SPAN_HPP
# define SPAN_HPP

class Span
{
public:
	Span();
	Span(unsigned int n);
	~Span();
	Span(const Span &toCopy);
	Span	&operator=(const Span &right);
	void	addNumber(int num);
	int		shortestSpan();
	int		longestSpan();
	void	addRange(std::vector<int>::iterator start, std::vector<int>::iterator end);

private:
	std::vector<int>	numbers;
	unsigned int		maxItems;
};

#endif