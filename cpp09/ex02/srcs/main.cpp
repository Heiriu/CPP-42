/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thbierne <thbierne@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/27 11:21:51 by thbierne          #+#    #+#             */
/*   Updated: 2023/03/29 13:13:33 by thbierne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/PmergeMe.hpp"

int		check_str(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if ((str[i] < '0' || str[i] > '9') && str[i] != ' ')
		{
			std::cout << "Error: only positive integer needed in the argument" << std::endl;
			return (1);
		}
		i++;
	}
	return (0);
}

int	main(int argc ,char **argv)
{
	if (argc != 2)
	{
		std::cout << "Error: wrong number of argument" << std::endl;
		return (1);
	}
	if (check_str(argv[1]) == 1)
		return (1);
	PmergeMe merge(argv[1]);
	merge.init();
}