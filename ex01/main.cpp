
#include <iostream>
#include <string>
#include "iter.hpp"


void word_length(std::string &s)
{
	std::cout << s.length() << std::endl;
}

void replace_num(int &n)
{
	n = 42;
}

void replace_arr(std::string &s)
{
	s = "haha";
}

int main(void)
{
	std::string words[3] = {"test", "electricity", "mouse"};
	int arr[4] = {3, 7, 45, 75};
	iter(words, 3, print_el);
	std::cout << std::endl;
	iter(words, 3, word_length);
	iter(arr, 4, replace_num);
	iter(arr, 4, print_el);
	std::cout << std::endl;
	iter(words, 3, replace_arr);
	iter(words, 3, print_el);

	return 0;
}