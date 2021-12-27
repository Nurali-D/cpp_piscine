#include "span.hpp"

Span::Span() : maxItems(0)
{}

Span::Span(unsigned int n) : maxItems(n)
{
	numbers.reserve(n);
}

Span::~Span()
{}

Span::Span(const Span &toCopy)
{
	*this = toCopy;
}

Span	&Span::operator=(const Span &right)
{
	if (this != &right)
	{
		this->maxItems = right.maxItems;
		this->numbers = right.numbers;
	}
	return (*this);
}

void	Span::addNumber(int num)
{
	if (this->numbers.size() >= this->maxItems)
		throw std::exception();
	this->numbers.push_back(num);
}

int		Span::shortestSpan()
{
	if (this->maxItems == 0 || this->maxItems == 1)
		throw std::exception();
	std::vector<int> copy = this->numbers;
	std::vector<int>::iterator first = copy.begin();
	std::vector<int>::iterator last = copy.end();
	std::sort(first, last);
	if (*(last - 1) - *first == 0)
		throw std::exception();
	int min = *first;
	for (first += 1; first != copy.end(); first++)
		if (*first - min > 0)
			break;
	return (*first - min);
}

int		Span::longestSpan()
{
	if (this->maxItems == 0 || this->maxItems == 1)
		throw std::exception();
	std::vector<int>::iterator max = std::max_element(numbers.begin(), numbers.end());
	std::vector<int>::iterator min = std::min_element(numbers.begin(), numbers.end());
	if (*max - *min == 0)
		throw std::exception();
	return (*max - *min);
}

void	Span::addRange(std::vector<int>::iterator start, std::vector<int>::iterator end)
{
	this->numbers.insert(this->numbers.end(), start, end);
}
