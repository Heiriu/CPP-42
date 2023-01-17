/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thbierne <thbierne@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 11:23:38 by thbierne          #+#    #+#             */
/*   Updated: 2023/01/17 15:24:56 by thbierne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

template <typename T>
void print(T var1)
{
	std::cout << var1 << std::endl;
}

int main()
{
	iter("test", 4, print);
	return (0);
}