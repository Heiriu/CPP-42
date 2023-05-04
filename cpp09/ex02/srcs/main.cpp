/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thbierne <thbierne@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/27 11:21:51 by thbierne          #+#    #+#             */
/*   Updated: 2023/05/04 15:22:29 by thbierne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/PmergeMe.hpp"

int		check_str(char *str[])
{
	int i;
	int y;

	i = 0;
	y = 1;
	while (str[y])
	{
		i = 0;
		while (str[y][i])
		{
			if ((str[y][i] < '0' || str[y][i] > '9') && str[y][i] != ' ')
			{
				std::cout << "\033[0;31mError: only positive integer needed in the argument\033[0m" << std::endl;
				return (1);
			}
			i++;
		}
		y++;
	}
	return (0);
}

int	main(int argc ,char **argv)
{
	if (argc == 1)
	{
		std::cout << "\033[0;31mError: wrong number of argument\033[0m" << std::endl;
		return (1);
	}
	if (check_str(argv) == 1)
		return (1);
	PmergeMe merge(argv);
	merge.init();
}