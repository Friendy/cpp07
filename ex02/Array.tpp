#include "Array.hpp"

/*CONSTRUCTORS*/
Array::Array(): _size(0){}

Array::Array(size_t n): _size(n)
{
	this->_a = new T[n];
}

//Assignment operator:
Array &Array::operator=(Array const &original)
{
	if (this != &original)
	{
		if (this->_size != original._size)
		{
			delete(this->a);
			this->a = new T[original._size];
		}
		for(size_t i = 0; i < this->_size; i++)
		{
			this->_a[i] = original._a[i];
		}
	}
	return(*this);
}

Array::Array(Array const &original)
{
	*this = original;
}

/*FUNCTIONS*/
int size() const
{
	return (_size);
}

/*DESTRUCTOR*/
Array::~Array(){}
