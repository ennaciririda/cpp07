#include <iostream>

template <typename T>
class MyContainer {
private:
	T value;

public:
	MyContainer(T val) : value(val) {}

	T getValue() const {
		return value;
	}
};

int main()
{
}


