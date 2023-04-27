/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thbierne <thbierne@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 15:28:46 by thbierne          #+#    #+#             */
/*   Updated: 2023/04/27 15:59:33 by thbierne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

		int check_line(std::string contenu);
		int	check_var(std::string contenu);
		void init();

	private:

		std::string _data;
		std::string _txt;
		std::list<std::string> _list;

};