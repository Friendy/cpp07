/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrubina <mrubina@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 00:08:29 by mrubina           #+#    #+#             */
/*   Updated: 2024/04/14 00:08:30 by mrubina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

template <typename T>
void swap(T &x, T &y)
{
	T temp;
	temp = x;
	x = y;
	y = temp;
}

template <typename T>
T const &min(T const &x, T const &y)
{
	if (y <= x)
		return(y);
	else
		return(x);
}

template <typename T>
T const &max(T const &x, T const &y)
{
	if (y >= x)
		return(y);
	else
		return(x);
}
#endif