/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Mutantstack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thbierne <thbierne@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 15:40:36 by thbierne          #+#    #+#             */
/*   Updated: 2023/01/26 09:53:42 by thbierne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <iostream>
#include <string>
#include <cstdlib>
#include <vector>
#include <algorithm>
#include <stack>

template <typename T>
class MutantStack : public std::stack<T>
{
	public:

		typedef std::stack<T> stack;
		typedef typename stack::container_type container;
		typedef typename container::iterator iterator;

		MutantStack();
		MutantStack(const std::stack<T> &src);
		~MutantStack();

		std::stack<T>& operator=(const std::stack<T> &src);
		MutantStack(const MutantStack &p);

		iterator begin()
		{
			return (stack::c.begin());
		}

		iterator end()
		{
			return (stack::c.end());
		}
};

#endif