#include <iostream>
#include <string>

#ifndef ITER_HPP
# define ITER_HPP

template< typename T >
void iter(T *array, size_t length, void (*function)(T const &element))
{
	for (size_t i = 0; i < length; i++)
		function(array[i]);
}

template< typename Z >
void printElement(Z const &e)
{
	std::cout << e << " ";
}

#endif