/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thbierne <thbierne@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 11:23:49 by thbierne          #+#    #+#             */
/*   Updated: 2023/01/17 13:35:16 by thbierne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>

template <typename T> 
void iter(T* tab, size_t size, void (*f)(const T&))
{
	for (size_t i = 0; i < size; i++)
	{
		(*f)(tab[i]);
	}
}

#endif