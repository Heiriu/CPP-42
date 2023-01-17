/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thbierne <thbierne@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 15:31:30 by thbierne          #+#    #+#             */
/*   Updated: 2023/01/17 16:56:13 by thbierne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>
#include <string>
#include <cstdlib>

template <typename T>
class Array
{

	public :

		Array();
		Array(unsigned int i);

		Array(const Array &p);
		Array& operator=(const Array &p);
		T& operator[](unsigned int i);

		~Array();

		unsigned int size();

	private :

		T* _ptr;
		unsigned int _lenght;

	class Oob : public std::exception
	{
		public:
		
			const char* what() const throw();
	};
	
};

#endif