/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thbierne <thbierne@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/27 11:24:26 by thbierne          #+#    #+#             */
/*   Updated: 2023/05/04 15:10:53 by thbierne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
#define PMERGEME_HPP

#include <unistd.h>			/////////////////////////////////// A DELETE
#include <iostream>
#include <iomanip>
#include <string>
#include <fstream>
#include <cstdlib>
#include <ctime>
#include <deque>
#include <vector>

class PmergeMe
{
	
	public:

		PmergeMe();
		PmergeMe(char *str[]);
		~PmergeMe();
		
		PmergeMe(const PmergeMe &p);
		void operator=(const PmergeMe &p);

		int	check_if_sort(int mode);
		void swap_var(int i, int mode);

		void alloc_deque();
		void get_number(char *str[]);
		void sort_begin_deque();
		void sort_end_deque();
		void sort_number_deque();

		void swap_var_vector(int i, int mode);
		int	check_if_sort_vector(int mode);
		void sort_begin_vector();
		void sort_end_vector();
		void alloc_vector();
		void sort_number_vector();
		
		int check_number();
		void print_iterator(int mode);
		void print_iterator_vector(int mode);
		void display_time(int mode);
		void init();

	private:

		std::clock_t _time;

		std::deque<int> _deque;
		std::deque<int> _beginDeque;
		std::deque<int> _endDeque;
		std::clock_t _timeDeque;

		std::vector<int> _vector;
		std::vector<int> _beginVector;
		std::vector<int> _endVector;
		std::clock_t _timeVector;
};

#endif