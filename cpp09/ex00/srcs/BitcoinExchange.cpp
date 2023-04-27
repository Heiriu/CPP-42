/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thbierne <thbierne@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 15:35:03 by thbierne          #+#    #+#             */
/*   Updated: 2023/04/27 15:59:24 by thbierne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange()
{
	std::cout << "\033[0;32mDefault constructor created\033[0m" << std::endl;
}

BitcoinExchange::BitcoinExchange(std::string data, char *txt) : _data(data), _txt(txt)
{
	std::cout << "\033[0;32mConstructor called\033[0m" << std::endl;
}

BitcoinExchange::~BitcoinExchange()
{
	std::cout << "\033[0;31mDefault destructor called\033[0m" << std::endl;
}

BitcoinExchange::BitcoinExchange(const BitcoinExchange &p)
{
	std::cout << "\033[0;32mcopy constructor called\033[0m" << std::endl;
	(void)p;
}

void BitcoinExchange::operator=(const BitcoinExchange &p)
{
	std::cout << "\033[0;32mCopy assignment call\033[0m" << std::endl;
	(void)p;
}

std::string BitcoinExchange::getData()
{
	return (_data);
}

std::string BitcoinExchange::getTxt()
{
	return (_txt);
}

int		BitcoinExchange::check_line(std::string contenu)
{
	int i;
	int y;

	i = 0;
	y = 0;
	while ((contenu[i] >= '0' && contenu[i] <= '9') || contenu[i] == '-')
	{
		if (contenu[i] == '-')
		{
			y++;
			i++;
		}
		i++;
		if (y >= 3)
			return (1);
	}
	if (y != 2)
		return (1);
	y = 0;
	if (contenu[i] != ' ')
		return (1);
	while (contenu[i] == ' ')
		i++;
	if (contenu[i++] != '|')
		return (1);
	while (contenu[i] == ' ')
		i++;
	if (contenu[i] == '-')
		return (2);
	if (contenu[i] < '0' && contenu[i] > '9')
		return (1);
	while (contenu[i] >= '0' && contenu[i] <= '9')
	{
		i++;
		if (contenu[i] == '.' && y == 0)
		{
			y++;
			i++;
			if (contenu[i] == ' ')
				return (1);
		}
	}
	if (!contenu[i])
	{
		return (0);
	}
	return (1);
}

void	BitcoinExchange::alloc_list()
{
	std::ifstream fdata(_data.c_str(), std::ios::in);
	
	std::string contenu;
	while (getline(fdata, contenu))
		_list.push_back(contenu);
}


long double BitcoinExchange::find_lowest_data(std::string contenu)
{
	int i;
	const char *str;
	long double nbr;
	std::string result;
	std::list<std::string>::iterator it = _list.begin();
	
	while (1)
	{
		it = _list.begin();
		while (it != _list.end())
		{
			result = *it;
			if (contenu.compare(0, 10, result, 0, 10) == 0)
			{
				str = result.c_str();
				std::istringstream iss(&str[11]);
				iss >> nbr;
				i = 0;
				while (i < 10)
					std::cout << str[i++];
				std::cout << " => ";
				return (nbr);
			}
			it++;
		}
		if (contenu[9] > '0')
			contenu[9]--;
		else if (contenu[8] > '0')
		{
			contenu[9] = '9';
			contenu[8]--;
		}
		else if (contenu[6] > '0')
		{
			contenu[9] = '1';
			contenu[8] = '3';
		}
	}
	return (0);
}

long double	BitcoinExchange::compare_vector(std::string contenu)
{
	int i;
	const char *str;
	long double nbr;
	std::string result;

	std::list<std::string>::iterator it = _list.begin();
	while (it != _list.end())
	{
		result = *it;
		if (contenu.compare(0, 10, result, 0, 10) == 0)
		{
			str = result.c_str();
			std::istringstream iss(&str[11]);
			iss >> nbr;
			i = 0;
			while (i < 10)
				std::cout << str[i++];
			std::cout << " => ";
			return (nbr);
		}
		it++;
	}
	nbr = find_lowest_data(contenu);
	return (nbr);
}

void	BitcoinExchange::find_result(long double result, std::string contenu)
{
	std::string cpy;
	long double nbr;

	nbr = compare_vector(contenu);
	if (nbr == 0)
		return ;
	std::cout << result << " = " << (result * nbr) << std::endl;
}

void	BitcoinExchange::print_result(std::string contenu)
{
	int i;
	long double result;
	const char *str; 

	i = contenu.size();
	i--;
	while ((contenu[i] >= '0' && contenu[i] <= '9') || contenu[i] == '.')
		i--;
	i++;
	str = contenu.c_str();
	std::istringstream iss(&str[i]);
	iss >> result;
	if (result > 1000 || result < 0)
		std::cout << "Error: too large number" << std::endl;
	else
		find_result(result, contenu);
}

void	BitcoinExchange::init()
{
	std::ifstream ftxt(_txt.c_str(), std::ios::in);
	std::string contenu;
	int i;

	getline(ftxt, contenu);
	if (contenu != "date | value")
	{
		std::cout << "error in .txt, first line \"data | value\" missing" << std::endl;
		ftxt.close();
		return ;
	}
	alloc_list();
	while (getline(ftxt, contenu))
	{
		if ((i = check_line(contenu)) != 0)
		{
			std::cout << "Error: ";
			if (i == 1)
				std::cout << "bad input => " << contenu << std::endl;
			if (i == 2)
				std::cout << "not a positive number." << std::endl;
		}
		else
			print_result(contenu);
	}
	ftxt.close();
}