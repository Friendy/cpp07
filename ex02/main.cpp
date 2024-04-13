/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrubina <mrubina@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 00:04:24 by mrubina           #+#    #+#             */
/*   Updated: 2024/04/14 00:05:53 by mrubina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

void test1()
{
	std::cout << "******* constructor and copy test******"<< std::endl;
	Array<int> arr(3);
	arr[0] = 2;
	arr[1] = 6;
	arr[2] = 9877;
	std::cout << "original:" << std::endl;
	print_arr(arr);
	Array<int> arr_copy(arr);
	std::cout << "copy:" << std::endl;
	print_arr(arr_copy);
	Array<std::string> words(3);
	words[0] = "table";
	words[1] = "pencil";
	words[2] = "plate";
	std::cout << "original:" << std::endl;
	print_arr(words);
	Array<std::string>words_copy(words);
	std::cout << "copy:" << std::endl;
	print_arr(words_copy);
	words_copy[0]= "desk";
	std::cout << "original:" << std::endl;
	print_arr(words);
	std::cout << "copy:" << std::endl;
	print_arr(words_copy);
}
void test2()
{
	std::cout << "******* assignment test******"<< std::endl;
	Array<std::string> names(4);
	names[0] = "Alice";
	names[1] = "Joe";
	names[2] = "Anna";
	names[3] = "Charlie";
	std::cout << "names:" << std::endl;
	print_arr(names);
	Array<std::string> test(2);
	test[0] = "tree";
	test[1] = "bush";
	std::cout << "test:" << std::endl;
	print_arr(test);
	test = names;
	std::cout << "test after assignment:" << std::endl;
	print_arr(test);
	test[2] = "Nina";
	std::cout << "original:" << std::endl;
	print_arr(names);
	std::cout << "copy:" << std::endl;
	print_arr(test);
	Array<std::string> copy2(4);
	copy2 = names;
	std::cout << "copy2 (same size):" << std::endl;
	print_arr(copy2);
}

void test3()
{
	std::cout << "******* empty array test******"<< std::endl;
	Array<float> floats;
	std::cout << "floats:" << std::endl;
	print_arr(floats);
	Array<std::string> words;
	std::cout << "words:" << std::endl;
	print_arr(words);
}

void test4()
{
	std::cout << "******* index out of bounds test******"<< std::endl;
	Array<float> floats(2);
	floats[0] = 3.14159;
	floats[1] = 42.42;
	std::cout << "floats:" << std::endl;
	print_arr(floats);
	try
	{
		std::cout << floats[7] << std::endl;
	}
	catch(std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
}

int main(void)
{
	test1();
	test2();
	test3();
	test4();
	return 0;
}