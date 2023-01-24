/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thbierne <thbierne@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 16:07:54 by thbierne          #+#    #+#             */
/*   Updated: 2023/01/24 14:34:12 by thbierne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main()
{
	try
	{
		Span sp = Span(5);
		sp.addNumber(9);
		sp.addNumber(1);
		sp.addNumber(4);
		sp.addNumber(6);
		sp.addNumber(30);
		sp.printSpan();
		sp.shortestSpan();
		sp.longestSpan();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		Span sp = Span(10000);
		std::vector<int> v;
		for (int i = 0; i <= 10000; i++)
			v.push_back(i);
		sp.addIterator(v.begin(), v.end());
		sp.addNumber(20000);
		sp.longestSpan();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	return (0);
}