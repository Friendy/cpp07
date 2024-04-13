#ifndef WHATEVER_HPP
# define WHATEVER_HPP

template <typename T1>
void print_el(T1 el)
{
	std::cout << el << ", ";
}

template <typename T>
void iter(T *arr, size_t len, void f(T&))
{
	for (size_t i = 0; i < len; i++)
	{
		f(arr[i]);
	}
}

#endif