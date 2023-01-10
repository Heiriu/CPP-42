/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thbierne <thbierne@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/05 14:41:29 by thbierne          #+#    #+#             */
/*   Updated: 2023/01/10 13:16:38 by thbierne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Convert.hpp"

int		main(int argc, char *argv[])
{
	if (argc == 2)
	{
		try
		{
			Convert conv(argv[1]);
			std::cout << conv;
		}
		catch (const std::exception& e)
		{
			std::cerr << e.what() << std::endl;
		}
	}
	else
		std::cerr << "Usage: ./convert <value>" << std::endl;
}