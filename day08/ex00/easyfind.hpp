#include <iostream>
#include <vector>
#include <algorithm>

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

template< typename T >
int easyfind(T &cont, int i)
{
	typename T::iterator iter = find(cont.begin(), cont.end(), i);

	if (iter != cont.end())
		return (*iter);
	else
		throw std::exception();
}

#endif