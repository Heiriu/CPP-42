/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thbierne <thbierne@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 16:21:54 by thbierne          #+#    #+#             */
/*   Updated: 2023/01/20 15:52:37 by thbierne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <string>
#include <cstdlib>
#include <vector>

class Span
{
	public:

		Span();
		Span(unsigned int size);

		Span(const Span &p);
		void operator=(const Span &p);
		
		~Span();

		void	addNumber(int nbr);
		void	shortestSpan();
		void	longestSpan();


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