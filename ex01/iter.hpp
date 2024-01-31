#ifndef ITER_H
#define ITER_H

#include <iostream>

template <typename T, typename F>
void iter(T *array, size_t lenght, void (*function_ptr)(F&))
{
	for (size_t i = 0; i < lenght ; i++)
		function_ptr(array[i]);
}
#endif
