#ifndef ITER_H
#define ITER_H

#include <iostream>

template <typename T>
void function(T &a)
{
	std::cout << a << std::endl;
}

template <typename T>
void iter(T *array, size_t lenght, void (*function_ptr)(T&))
{
	for (size_t i = 0; i < lenght ; i++)
		function_ptr(array[i]);
}
#endif

