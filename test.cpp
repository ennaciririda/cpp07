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
	MyContainer<int> intContainer(42.4);
	MyContainer<double> doubleContainer(3.14);

	int intValue = intContainer.getValue();
	double doubleValue = doubleContainer.getValue();
	std::cout << intValue << "  **  " << doubleValue;
}


