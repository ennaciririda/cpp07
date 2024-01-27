#ifndef ITER_H
#define ITER_H

#include <iostream>

#endif

template <typename T>
void function_ptr(T a)
{
	std::cout << a << std::endl;
}

template <typename T>
void iter(T *array, size_t lenght, void *function_ptr)
{
	for (size_t i = 0; i < lenght ; i++)
		function_ptr(array[i]);
}
