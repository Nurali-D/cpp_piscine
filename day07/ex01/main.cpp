#include "iter.hpp"

class Awesome
{
public:
	Awesome() : n(42)
	{
		return;
	}

	int get() const
	{
		return (this->n);
	}

private:
	int n;
};

std::ostream &operator<<(std::ostream &o, Awesome const &rhs)
{
	o << rhs.get();
	return (o);
}

template< typename T >
void print(T const &x)
{
	std::cout << x << std::endl;
	return;
}

int main()
{
	int a[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	float f[] = {0.1, 0.2, 0.3, 0.4, 0.5, 0.6, 0.7, 0.8, 0.9, 1.0, 1.1, 1.2};
	char c[] = {'a', 'b', 'c', 'd'};
	std::string s[] = {"one", "two", "three", "four"};

	iter(a, 10 , printElement);
	std::cout << "\n";

	iter(f, 12, printElement);
	std::cout << "\n";

	iter(c, 5, printElement);
	std::cout << "\n";

	iter(s, 4, printElement);
	std::cout << "\n";

	int tab[] = {0, 1, 2, 3, 4};
	Awesome tab2[5];

	iter(tab, 5, print);
	iter(tab2, 5, print);
	return (0);
}