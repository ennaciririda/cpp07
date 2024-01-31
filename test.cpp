#include <iostream>

template <typename T, typename F>
void func(T& a, F& b, F& c)
{
	std::cout << a << std::endl;
	std::cout << b;

}

int main()
{
	int a = 3;
	float b = 12;
	func(a , b, b);
}


