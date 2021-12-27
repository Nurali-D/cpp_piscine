#include "span.hpp"
#include <ctime>
#include <cstdlib>

int main()
{
	Span sp = Span(5);

	sp.addNumber(5);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	std::cout << "shortest span = " << sp.shortestSpan() << std::endl;
	std::cout << "longest span = " << sp.longestSpan() << std::endl;

	std::vector<int> v(20000);

	std::srand(std::time(0));
	for (std::vector<int>::iterator i = v.begin(); i != v.end(); i++)
		*i = rand() % 100000 - rand() % 100000;
	// for (std::vector<int>::iterator i = v.begin(); i != v.end(); i++)
	// 	std::cout << *i << " ";
	std::cout << std::endl;

	Span sp1(20000);
	
	sp1.addRange(v.begin(), v.end());
	std::cout << "shortest span = " << sp1.shortestSpan() << std::endl;
	std::cout << "longest span = " << sp1.longestSpan() << std::endl;
	return (0);
}