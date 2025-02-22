/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thbierne <thbierne@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 11:31:03 by thbierne          #+#    #+#             */
/*   Updated: 2022/12/05 10:36:00 by thbierne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Dog.hpp"

Dog::Dog()
{
	std::cout << "\033[0;32mDog Default constructor created\033[0m" << std::endl;
	setType("Dog");
}

Dog::~Dog()
{
	std::cout << "\033[0;31mDog Default Destructor called\033[0m" << std::endl;
}

void	Dog::makeSound() const
{
	std::cout << "Woof" << std::endl;
}