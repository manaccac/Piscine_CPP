#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>

template < typename T_iter >
void iter(const T_iter * array, int len, void f(T_iter const &))
{
	for (int i = 0; i < len; i++)
		f(array[i]);
}

#endif