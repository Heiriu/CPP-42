/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thbierne <thbierne@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 14:49:13 by thbierne          #+#    #+#             */
/*   Updated: 2023/01/24 10:02:11 by thbierne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>
#include <string>
#include <cstdlib>
#include <vector>
#include <iterator>
#include <algorithm>

template <typename T>
void easyfind(T &container, int x);

template<typename T>
void print(T &container);

class Oob : public std::exception
{
	public:
	
		const char* what() const throw();
};

#endif