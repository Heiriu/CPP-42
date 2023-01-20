/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thbierne <thbierne@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 15:32:04 by thbierne          #+#    #+#             */
/*   Updated: 2023/01/20 16:00:53 by thbierne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"


/*			constructor			*/

Span::Span()
{
	std::cout << "\033[0;32mempty constructor created\033[0m" << std::endl;
	_size = 0;
}

Span::Span(unsigned int size) : _size(size)
{
	std::cout << "\033[0;32mconstructor created\033[0m" << std::endl;
	std::vector<int> _v(size);
}


/*			copy and assignment			*/

Span::Span(const Span &p)
{
	std::cout << "\033[0;32mcopy constructor called\033[0m" << std::endl;
	_size = p._size;
	_v = p._v;
}

void Span::operator=(const Span &p)
{
	std::cout << "\033[0;33mCopy assignment call\033[0m" << std::endl;
	_size = p._size;
	_v = p._v;
}


/*			dsetructor			*/

Span::~Span()
{
	std::cout << "\033[0;31mDefault destructor called\033[0m" << std::endl;
}


/*			public fonction			*/


void	Span::addNumber(int nbr)
{
	unsigned int i = _v.size();

	if (i >= _size)
		throw NoMoreSpace();
	_v[i] = nbr;
}

void	Span::shortestSpan()
{
	if (_v.size() == 0)
		throw SpanEmpty();
	else if (_v.size() == 1)
		throw SpanOneNumber();
	std::cout << _v[3] << std::endl;
}

void Span::longestSpan()
{
	if (_v.size() == 0)
		throw SpanEmpty();
	else if (_v.size() == 1)
		throw SpanOneNumber();
}


/*			exception handle		*/

const char* Span::NoMoreSpace::what() const throw()
{
	return ("No more space for new number");
}

const char* Span::SpanEmpty::what() const throw()
{
	return ("No Number found");
}

const char* Span::SpanOneNumber::what() const throw()
{
	return ("only one number found");
}