/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thbierne <thbierne@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 14:48:16 by thbierne          #+#    #+#             */
/*   Updated: 2023/01/24 10:02:31 by thbierne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.tpp"

int main()
{
	std::vector<int> v;
	for (int i = 1; i <= 5; i++)
		v.push_back(i);
	print(v);
	easyfind(v, 0);
	easyfind(v, 2);
	easyfind(v, 1);
	easyfind(v, 11);
	return (0);
}