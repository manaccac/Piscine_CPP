#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>
#include <string>
#include <cstdlib>
#include <algorithm>
#include <exception>

template< typename T >
int &easyfind(T list, const int i)
{
	typename T::iterator it;

	if (list.empty())
		throw (std::exception());
	it = std::find(list.begin(), list.end(), i);
	if (it == list.end())
		throw(std::exception());
	return (*it);
}

#endif