#ifndef WHATEVER_H
#define WHATEVER_H

#include <iostream>

template <typename T>
void swap(T &a, T &b)
{
	T s;
	s = a;
	a = b;
	b = s;
}

template <typename T>
T min(T a, T b)
{
	if (a < b)
		return a;
	return b;
}

template <typename T>
T max (T a, T b)
{
	if (a > b)
		return a;
	return b;
}
#endif