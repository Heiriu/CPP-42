/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.tpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thbierne <thbierne@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 15:39:56 by thbierne          #+#    #+#             */
/*   Updated: 2023/01/26 09:53:37 by thbierne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Mutantstack.hpp"


/*		constructor		*/

template <typename T> MutantStack<T>::MutantStack() : stack()
{
	std::cout << "\033[0;32mempty constructor created\033[0m" << std::endl;
}

template <typename T> MutantStack<T>::MutantStack(const std::stack<T> &src) : stack(src)
{
	std::cout << "\033[0;32mconstructor created\033[0m" << std::endl;
}


/*			copy and assigment			*/

template <typename T> std::stack<T>& MutantStack<T>::operator=(const std::stack<T> &p)
{
	std::cout << "\033[0;32mcopy assignment called\033[0m" << std::endl;
	if (*this != p)
		*this = p;
	return (*this);
}

template <typename T> MutantStack<T>::MutantStack(const MutantStack &p)
{
	std::cout << "\033[0;32mcopy constructor called\033[0m" << std::endl;
	if (*this != p)
		*this = p;
}


/*		destructor		*/

template <typename T> MutantStack<T>::~MutantStack()
{
	std::cout << "\033[0;31mDefault destructor called\033[0m" << std::endl;
}