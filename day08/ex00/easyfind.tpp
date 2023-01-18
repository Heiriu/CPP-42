/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.tpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thbierne <thbierne@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 15:46:04 by thbierne          #+#    #+#             */
/*   Updated: 2023/01/18 16:01:48 by thbierne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

template <typename T>
void easyfind(T& var, int i)
{
	int size = var.size();
	for (int index = 0; index < size; index++)
	{
		if (i == var[index])
		{
			std::cout << "find " << i << " at index " << index << std::endl;
			return ;
		}
	}
	throw Oob();
}


/*			exception handle		*/

const char* Oob::what() const throw()
{
	return ("didn't find the number");
}