#include "Array.hpp"


void fun()
{
	system("leaks ex02");
}

int main()
{
	try
	{
		Array<std::string> a(15);
		Array<int> b;
		std::cout << a[0] << std::endl;
		std::cout << b.size() << std::endl;
		// std::cout << a.size() << std::endl;
	}
	catch(const std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	atexit(fun);
	return 0;
}