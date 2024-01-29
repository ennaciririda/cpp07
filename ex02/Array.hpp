#ifndef ARRAY_H
#define ARRAY_H

#include <iostream>
template <typename T>
class Array
{
	private :
		T *array;
		unsigned int num_elements;
	public:
	Array() : num_elements(0)
	{
	}
	Array(unsigned int n)
	{
		array = new T(n);
	}
	Array(const Array &obj)
	{
		*this = obj;
	}
	Array& operator=(const Array &obj)
	{
		this->array = new T(obj.num_elements);
		this->num_elements = obj.num_elements;
		for (unsigned int i = 0; i < num_elements; i++)
		{
			array[i] = obj.array[i];
		}
	}
	T& operator[](int n)
	{
		// std::cout << "heeeere\n";
		// std::cout << num_elements;
		if (n < 0 || n >= anum_elements)
			std::cout << "heeeere233\n";
			// throw Except();
		return this->array[n];
	}
	~Array()
	{
		delete []array;
	}

	class Except : std::exception
	{
		public :
			const char* what() const throw()
			{
				return "the index in out of bounds";
			}
	};
};

#endif