/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrubina <mrubina@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/13 23:48:47 by mrubina           #+#    #+#             */
/*   Updated: 2024/04/13 23:59:18 by mrubina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP
# include <iostream>
# include <string>

template <typename T1>
void print_el(T1 &el)
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

template <typename T>
void iter(T const *arr, size_t len, void f(T const &))
{
	for (size_t i = 0; i < len; i++)
	{
		f(arr[i]);
	}
}

#endif