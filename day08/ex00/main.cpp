/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thbierne <thbierne@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 14:48:16 by thbierne          #+#    #+#             */
/*   Updated: 2023/01/18 16:03:34 by thbierne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.tpp"

int main()
{
	try
	{
		std::vector<int> v(4);
		for (int i = 0; i < 4; i++)
		v[i] = i + 8;
		easyfind(v, 11);
		easyfind(v, 8);
		easyfind(v, 1);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	return (0);
}