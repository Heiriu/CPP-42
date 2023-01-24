/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.tpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thbierne <thbierne@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 15:53:44 by thbierne          #+#    #+#             */
/*   Updated: 2023/01/24 10:01:58 by thbierne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

template<typename T>
void easyfind(T &container, int x)
{
	try
	{
		typename T::iterator it = std::find(container.begin(), container.end(), x);
    	if (it == container.end())
		{
        	throw Oob();
		}
		std::cout << "find " << x << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}


/*			exception handle		*/

const char* Oob::what() const throw()
{
	return ("didn't find the number");
}

template<typename T>
void print(T &container)
{
	int i = -1;
	while (container[++i])
		std::cout << container[i] << " ";
	std::cout << std::endl;
}