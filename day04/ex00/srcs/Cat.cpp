/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thbierne <thbierne@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 11:11:30 by thbierne          #+#    #+#             */
/*   Updated: 2022/11/25 11:23:41 by thbierne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Cat.hpp"

Cat::Cat()
{
	std::cout << "\033[0;32mCat Default constructor created\033[0m" << std::endl;
	setType("Cat");
}

Cat::~Cat()
{
	std::cout << "\033[0;31mCat Default Destructor called\033[0m" << std::endl;
}