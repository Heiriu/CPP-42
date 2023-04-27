/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thbierne <thbierne@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 15:44:47 by thbierne          #+#    #+#             */
/*   Updated: 2023/04/27 15:59:40 by thbierne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/BitcoinExchange.hpp"

int	check_file(std::string data, std::string txt)
{
	std::ifstream fdata(data.c_str(), std::ios::in);
	std::ifstream ftxt(txt.c_str(), std::ios::in);

	if (fdata && ftxt)
	{
		fdata.close();
		ftxt.close();
	}
	else
	{
		if (!fdata)
			std::cerr << "Cannot open the database file" << std::endl;
		else if (!ftxt)
			std::cerr << "Cannot open the .txt from the argument" << std::endl;
		if (fdata)
			fdata.close();
		else if (ftxt)
			ftxt.close();
		return (-1);
	}
	return (0);
}

int	main(int argc, char *argv[])
{
	(void)argc;
	(void)argv;
	if (argc != 2)
	{
		std::cout << "wrong number of arguments use" << std::endl;
		return (1);
	}
	std::string data = "../cpp_09/data.csv";
	BitcoinExchange bce(data, argv[1]);
	if (check_file(bce.getData(), bce.getTxt()) == -1)
		return (1);
	bce.init();
}