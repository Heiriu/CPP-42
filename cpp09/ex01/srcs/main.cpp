/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thbierne <thbierne@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 12:31:09 by thbierne          #+#    #+#             */
/*   Updated: 2023/03/29 10:45:21 by thbierne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/RPN.hpp"

int	main(int argc, char **argv)
{
	int i;

	if (argc != 2)
	{
		std::cout << "\033[0;31mError: wrong number of arguments use\033[0m" << std::endl;
		return (1);
	}
	i = 0;
	while (argv[1][i])
	{
		if (argv[1][i] != ' ' && argv[1][i] != '+' && argv[1][i] != '-' && argv[1][i] != '*' && argv[1][i] != '/' && (argv[1][i] < '0' || argv[1][i] > '9'))
			break;
		i++;
	}
	if (argv[1][i])
	{
		std::cout << "\033[0;31mError: wrong character find in argument\033[0m" << std::endl;
		return (1);
	}
	RPN nbr(argv[1]);
	nbr.init();
}