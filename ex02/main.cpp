
#include <iostream>
#include <string>
#include "Array.hpp"

int main(void)
{
	Array<int> arr(3);
	arr[1] = 6;
	// // int *a = new int();
	std::cout << arr[1] << std::endl;
	// int *arr1 = new int[4];
	// arr = arr1;
	Array<int> arr1 = arr;
	std::cout << arr1[1] << std::endl;
	std::cout << &arr << std::endl;
	std::cout << &arr1 << std::endl;
	// std::string words[3] = {"test", "electricity", "mouse"};
	// int arr[4] = {3, 7, 45, 75};
	// iter(words, 3, print_el);
	// std::cout << std::endl;
	// iter(words, 3, word_length);
	// iter(arr, 4, replace_num);
	// iter(arr, 4, print_el);
	// std::cout << std::endl;
	// iter(words, 3, replace_arr);
	// iter(words, 3, print_el);

	return 0;
}