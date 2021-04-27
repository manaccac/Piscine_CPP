#ifndef WHATEVER_HPP
#define WHATEVER_HPP

#include <iostream>

template< typename T_max >
T_max max(T_max const & x, T_max const & y)
{
	if (x > y)
		return (x);
	else
		return (y);
}

template< typename T_min >
T_min min(T_min const & x, T_min const & y)
{
	if (x < y)
		return (x);
	else
		return (y);
}

template < typename T_swap >
void swap(T_swap & x, T_swap & y)
{
	T_swap tmp;

	tmp = x;
	x = y;
	y = tmp;
}

#endif