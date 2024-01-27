#include "iter.hpp"


int main()
{
	int array[] = {12, 13, 55 ,76};
	iter(array, 4, function_ptr(array));
}