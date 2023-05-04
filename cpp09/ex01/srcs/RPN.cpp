/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thbierne <thbierne@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 13:13:46 by thbierne          #+#    #+#             */
/*   Updated: 2023/05/04 14:17:44 by thbierne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/RPN.hpp"


//			Constructor			//

RPN::RPN()
{
	//std::cout << "\033[0;32mDefault constructor created\033[0m" << std::endl;
	_i = 0;
}

RPN::RPN(char *str) : _str(str)
{
	//std::cout << "\033[0;32mConstructor created\033[0m" << std::endl;
	_i = 0;
}


//			Destructor			//

RPN::~RPN()
{
	//std::cout << "\033[0;31mDefault destructor called\033[0m" << std::endl;
}


//			copy and assigment			//

RPN::RPN(const RPN &p)
{
	//std::cout << "\033[0;32mcopy constructor called\033[0m" << std::endl;
	_i = p._i;
	_stack = p._stack;
	_str = p._str;
}

void RPN::operator=(const RPN &p)
{
	//std::cout << "\033[0;32mCopy assignment call\033[0m" << std::endl;
	_i = p._i;
	_stack = p._stack;
	_str = p._str;
}


//			fonctions			//

void RPN::init()
{
	while (_str[_i])
	{
		while (_str[_i] == ' ')
			_i++;
		if (_str[_i] == '-' && (_str[_i + 1] >= '0' && _str[_i + 1] <= '9'))
		{
			add_nbr_stack();
			while (_str[_i] >= '0' && _str[_i] <= '9')
				_i++;
		}
		if (_str[_i] >= '0' && _str[_i] <= '9')
		{
			add_nbr_stack();
			while (_str[_i] >= '0' && _str[_i] <= '9')
				_i++;
		}
		else if (_str[_i] == '+' || _str[_i] == '-')
		{
			if (plus_minus_stack() == 1)
				return ;
			_i++;
		}
		else if (_str[_i] == '*' || _str[_i] == '/')
		{
			if (multiply_divide_stack() == 1)
				return ;
			_i++;
		}
	}
	if (_stack.size() == 1)
		std::cout << _stack.top() << std::endl;
	else if (_stack.size() == 0)
		std::cout << "\033[0;31mError: number not found in arg\033[0m" << std::endl;
	else
		std::cout << "\033[0;31mError: number left in the stack\033[0m" << std::endl;
}

void		RPN::add_nbr_stack()
{
	int nbr;
	const char *str;

	str = _str.c_str();
	if (str[_i] == '-')
	{
		_i++;
		nbr = atoi(&str[_i]);
		nbr *= -1;
	}
	else
		nbr = atoi(&str[_i]);
	_stack.push(nbr);
}

int		RPN::plus_minus_stack()
{
	int fnbr;
	int snbr;

	if (_stack.size() > 1)
	{
		fnbr = _stack.top();
		_stack.pop();
		snbr = _stack.top();
		_stack.pop();
		if (_str[_i] == '+')
			_stack.push(snbr + fnbr);
		else if (_str[_i] == '-')
			_stack.push(snbr - fnbr);
	}
	else
	{
		std::cout << "\033[0;31mError: not enought number\033[0m" << std::endl;
		return (1);
	}
	return (0);
}

int		RPN::multiply_divide_stack()
{
	int fnbr;
	int snbr;

	if (_stack.size() > 1)
	{
		fnbr = _stack.top();
		_stack.pop();
		snbr = _stack.top();
		_stack.pop();
		if (_str[_i] == '*')
			_stack.push(snbr * fnbr);
		else if (_str[_i] == '/')
		{
			if (fnbr == 0 || snbr == 0)
				_stack.push(0);
			else
				_stack.push(snbr / fnbr);
		}
	}
	else
	{
		std::cout << "\033[0;31mError: not enought number\033[0m" << std::endl;
		return (1);
	}
	return (0);
}


//			Getter			//


std::string RPN::getStr()
{
	return (_str);
}

std::stack<int> RPN::getStack()
{
	return (_stack);
}