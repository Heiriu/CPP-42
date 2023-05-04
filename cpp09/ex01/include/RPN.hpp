/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thbierne <thbierne@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 12:25:12 by thbierne          #+#    #+#             */
/*   Updated: 2023/05/02 10:50:47 by thbierne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPN_HPP
#define RPN_HPP

#include <iostream>
#include <string>
#include <fstream>
#include <cstdlib>
#include <stack>

class RPN
{

	public:

		RPN();
		RPN(char *str);
		~RPN();

		RPN(const RPN &p);
		void operator=(const RPN &p);

		void 	init();
		void	add_nbr_stack();
		int		plus_minus_stack();
		int		multiply_divide_stack();

		std::string getStr();
		std::stack<int> getStack();

	private:

		int				_i;
		std::stack<int> _stack;
		std::string		_str;

};

#endif