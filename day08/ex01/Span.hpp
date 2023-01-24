/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thbierne <thbierne@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 16:21:54 by thbierne          #+#    #+#             */
/*   Updated: 2023/01/24 14:19:18 by thbierne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <string>
#include <cstdlib>
#include <vector>
#include <algorithm>

class Span
{
	public:

		Span();
		Span(unsigned int size);

		Span(const Span &p);
		void operator=(const Span &p);
		
		~Span();

		void	addNumber(int nbr);
		
		void 	addIterator(const std::vector<int>::iterator& begin, const std::vector<int>::iterator& end);

		void	shortestSpan();
		void	longestSpan();

		void 	printSpan();


	private:

		std::vector<int> _v;
		unsigned int	_size;

	class NoMoreSpace : public std::exception
	{
		public:
	
		const char* what() const throw();
	};

	class SpanEmpty : public std::exception
	{
		public:
	
		const char* what() const throw();
	};

	class SpanOneNumber : public std::exception
	{
		public:
	
		const char* what() const throw();
	};
};

#endif