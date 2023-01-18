/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thbierne <thbierne@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 14:49:13 by thbierne          #+#    #+#             */
/*   Updated: 2023/01/18 15:58:51 by thbierne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>
#include <string>
#include <cstdlib>
#include <vector>

template <typename T>
void easyfind(T& var, int i);

class Oob : public std::exception
{
	public:
	
		const char* what() const throw();
};

#endif