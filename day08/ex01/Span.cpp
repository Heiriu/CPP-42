/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thbierne <thbierne@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 15:32:04 by thbierne          #+#    #+#             */
/*   Updated: 2023/01/26 10:09:52 by thbierne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

/*			constructor			*/

Span::Span() : _size(0)
{
	//std::cout << "\033[0;32mempty constructor created\033[0m" << std::endl;
}

Span::Span(unsigned int size) : _size(size)
{
	//std::cout << "\033[0;32mconstructor created\033[0m" << std::endl;
	std::vector<int> _v(size);
}


/*			copy and assignment			*/

Span::Span(const Span &p)
{
	//std::cout << "\033[0;32mcopy constructor called\033[0m" << std::endl;
	_size = p._size;
	_v = p._v;
}

Span& Span::operator=(const Span &p)
{
	//std::cout << "\033[0;33mCopy assignment call\033[0m" << std::endl;
	_size = p._size;
	_v = p._v;
	return (*this);
}


/*			destructor			*/

Span::~Span()
{
	//std::cout << "\033[0;31mDefault destructor called\033[0m" << std::endl;
}


/*			public fonction			*/


void	Span::addNumber(int nbr)
{
	if (_v.size() > _size)
		throw NoMoreSpace();
	_v.push_back(nbr);
}

void Span::addIterator(const std::vector<int>::iterator& begin, const std::vector<int>::iterator& end) 
{
	if ((std::distance(begin, end) + _v.size()) > _size)
	{
		throw NoMoreSpace();
	}
	_v.insert(_v.end(), begin, end);
}

void	Span::shortestSpan()
{
	if (_v.size() == 0)
		throw SpanEmpty();
	else if (_v.size() == 1)
		throw SpanOneNumber();
    int min = 2147483647;
    for (std::vector<int>::iterator it = _v.begin(); it != _v.end()-1; ++it)
	{
        int currSpan = *(it + 1) - *it;
		if (currSpan < 0)
			currSpan = std::abs(currSpan);
        if (currSpan < min)
            min = currSpan;
    }
	std::cout << "Shortest Span: " << min << std::endl;
}

void Span::longestSpan()
{	
	if (_v.size() == 0)
		throw SpanEmpty();
	else if (_v.size() == 1)
		throw SpanOneNumber();
	int max = 0;
    for (std::vector<int>::iterator it = _v.begin(); it != _v.end()-1; ++it)
	{
        int currSpan = *(it + 1) - *it;
		if (currSpan < 0)
			currSpan = std::abs(currSpan);
        if (currSpan > max)
            max = currSpan;
    }
	std::cout << "Longest Span: " << max << std::endl;
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


/*			display			*/

void print(int i)
{
	std::cout << i << " ";
}

void Span::printSpan()
{
	std::for_each(_v.begin(), _v.end(), print);
	std::cout << std::endl;
}
