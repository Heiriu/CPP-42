/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thbierne <thbierne@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 16:12:35 by thbierne          #+#    #+#             */
/*   Updated: 2023/01/17 16:58:21 by thbierne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"


/*			constructor			*/

template <typename T> Array<T>::Array()
{
	_ptr = new T[0];
	_lenght = 0;
}

template <typename T> Array<T>::Array(unsigned int n)
{
	_ptr = new T[n];
	_lenght = n;
}


/*			copy and assignment			*/

template <typename T> Array<T>::Array(const Array &p)
{
	std::cout << "\033[0;32mcopy constructor called\033[0m" << std::endl;
	_ptr = p._ptr;
	_Lenght = p._Lenght;
}

template <typename T> Array<T>& Array<T>::operator=(const Array &p)
{
	std::cout << "\033[0;33mCopy assignment call\033[0m" << std::endl;
	_ptr = p._ptr;
	_Lenght = p._Lenght;
	return (*this);
}

template <typename T> T& Array<T>::operator[](unsigned int i)
{
	if (i >= lenght)
		throw
	return (_ptr[i]);
}


/*			destructor			*/

template <typename T> Array<T>::~Array()
{
	//std::cout << "\033[0;31mDefault destructor called\033[0m" << std::endl;
}



/*			public fonction			*/

template <typename T> unsigned int Array<T>::size()
{
	return (_lenght);
}



/*			exception handle		*/

template <typename T> const char* Array<T>::Oob::what() const throw()
{
	return ("out of bound !!!");
}