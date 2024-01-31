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
		array  = new T[0];
	}
	Array(unsigned int n) : num_elements(n)
	{
		array = new T[n];
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
		return *this;
	}
	T& operator[](unsigned int n)
	{
		if (n >= num_elements)
			throw Except();
		return this->array[n];
	}
	unsigned int size()
	{
		return this->num_elements;
	}
	~Array()
	{
		delete []array;
	}

	class Except : public std::exception
	{
		public :
			const char* what() const throw()
			{
				return "the index in out of bounds";
			}
	};
};

#endif