#include "Array.hpp"

int main()
{
	try
	{
		Array<int> a(15);
		std::cout << a[18];
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

}