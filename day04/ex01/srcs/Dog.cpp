/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thbierne <thbierne@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 11:31:03 by thbierne          #+#    #+#             */
/*   Updated: 2022/12/07 12:40:40 by thbierne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Dog.hpp"
#include "../includes/Brain.hpp"

Dog::Dog()
{
	std::cout << "\033[0;32mDog Default constructor created\033[0m" << std::endl;
	setType("Dog");
	_brain = new Brain();
}

Dog::~Dog()
{
	std::cout << "\033[0;31mDog Default Destructor called\033[0m" << std::endl;
	delete _brain;
}

Dog::Dog(const Dog &p)
{
	std::cout << "\033[0;32mcopy constructor called\033[0m" << std::endl;
	_type = p._type;
	_brain = p._brain;
}

void Dog::operator=(const Dog &p)
{
	std::cout << "\033[0;32mCopy assignment call\033[0m" << std::endl;
	_type = p._type;
	_brain = p._brain;
}

void	Dog::makeSound() const
{
	std::cout << "Woof" << std::endl;
}