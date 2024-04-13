/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrubina <mrubina@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/13 23:48:43 by mrubina           #+#    #+#             */
/*   Updated: 2024/04/13 23:58:16 by mrubina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

void word_length(const std::string &s)
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

struct climate
{
	std::string room;
	float temperature;
};

void init_climate(climate &cl, const std::string room, float temp)
{
	cl.room = room;
	cl.temperature = temp;
}

void show_climate(climate &cl)
{
	std::cout << "the temperature in the " << cl.room << " is " << cl.temperature << std::endl;
}

void test1()
{
	std::cout << "******* string test******"<< std::endl;
	std::string words[3] = {"test", "electricity", "mouse"};
	iter(words, 3, print_el);
	std::cout << std::endl;
	iter(words, 3, word_length);
	iter(words, 3, replace_arr);
	iter(words, 3, print_el);
	std::cout << std::endl;
}

void test2()
{
	std::cout << "******* int test******"<< std::endl;
	int arr[4] = {3, 7, 45, 75};
	iter(arr, 4, print_el);
	std::cout << std::endl;
	iter(arr, 4, replace_num);
	iter(arr, 4, print_el);
	std::cout << std::endl;
}

void test3()
{
	std::cout << "******* structure test******"<< std::endl;
	climate cl[2];
	init_climate(cl[0], "kitchen", 20.5);
	init_climate(cl[1], "bedroom", 22.2);
	iter(cl, 2, show_climate);
}

int main(void)
{
	test1();
	test2();
	test3();
	return 0;
}