/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thbierne <thbierne@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 15:28:46 by thbierne          #+#    #+#             */
/*   Updated: 2023/05/02 10:50:09 by thbierne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP

#include <iostream>
#include <string>
#include <fstream>
#include <cstdlib>
#include <sstream>
#include <list>

class BitcoinExchange
{

	public:

		BitcoinExchange();
		BitcoinExchange(std::string data, char *txt);
		~BitcoinExchange();

		BitcoinExchange(const BitcoinExchange &p);
		void operator=(const BitcoinExchange &p);

		void	alloc_list();
		void	print_result(std::string contenu);
		void	find_result(long double result, std::string contenu);
		long double find_lowest_data(std::string contenu);
		long double	compare_vector(std::string contenu);
		std::string getData();
		std::string getTxt();

		int	check_var_date(std::string contenu);
		int check_line(std::string contenu);
		int	check_var(std::string contenu);
		void init();

	private:

		std::string _data;
		std::string _txt;
		std::list<std::string> _list;

};

#endif