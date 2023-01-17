/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thbierne <thbierne@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 10:55:09 by thbierne          #+#    #+#             */
/*   Updated: 2023/01/17 11:12:01 by thbierne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
#define WHATEVER_HPP

#include <iostream>

template <typename T> 
void swap(T& var1, T& var2)
{
	T tmp;

	tmp = var1;
	var1 = var2;
	var2 = tmp;
}

template <typename T>
const T& min(T& var1, T& var2)
{
	if (var1 == var2)
		return (var2);
	else if (var1 < var2)
		return (var1);
	return (var2);
}

template <typename T>
const T& max(T& var1, T& var2)
{
	if (var1 == var2)
		return (var2);
	else if (var1 < var2)
		return (var2);
	return (var1);
}

#endif