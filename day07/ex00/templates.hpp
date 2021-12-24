#include <iostream>
#include <string>

#ifndef TEMPLATES_HPP
# define TEMPLATES_HPP

template< typename T >
void swap(T &a, T &b)
{
	T c;

	c = a;
	a = b;
	b = c;
}

template< typename F >
F min(const F &a, const F &b)
{
	return (a < b ? a : b);
}

template< typename D >
D max(const D &a, const D &b)
{
	return (a > b ? a : b);
}

#endif