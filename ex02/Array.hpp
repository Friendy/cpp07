#ifndef ARRAY_HPP
# define ARRAY_HPP
# include <string>
# include <iostream>

template <typename T>
class Array {

private:
	T *_a;
	u_int _size;

public:
	/*CONSTRUCTORS*/
	Array(): _size(0){};
	Array(u_int n): _size(n)
	{
		this->_a = new T[n];
	}

	//Assignment operator:
	Array &operator=(Array const &original)
	{
		if (this != &original)
		{
			if (this->_size != original._size)
			{
				if (this->_size != 0)
					delete [] this->_a;
				this->_a = new T[original._size];
				this->_size = original._size;
			}
			for (u_int i = 0; i < original._size; i++)
				this->_a[i] = original._a[i];
		}
		return(*this);
	}

//Copy constructor:
	Array(Array const &original)
	{
		this->_size = original._size;
		if (original._size != 0)
			this->_a = new T[original._size];
		for (u_int i = 0; i < original._size; i++)
				this->_a[i] = original._a[i];
	}

	/*FUNCTIONS*/
	int size() const
	{
		return (_size);
	}

	T &operator[](u_int const &i) const
	{
		if (i >= this->_size)
			throw std::exception();
		return (_a[i]);
	}

	~Array()
	{
		if (_size != 0)
			delete [] _a;
	}
};

#endif
