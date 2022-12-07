/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thbierne <thbierne@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 11:11:30 by thbierne          #+#    #+#             */
/*   Updated: 2022/12/07 13:44:47 by thbierne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Cat.hpp"
#include "../includes/Brain.hpp"

Cat::Cat()
{
	std::cout << "\033[0;32mCat Default constructor created\033[0m" << std::endl;
	setType("Cat");
	_brain = new Brain();
}

Cat::~Cat()
{
	std::cout << "\033[0;31mCat Default Destructor called\033[0m" << std::endl;
	delete _brain;
}

Cat::Cat(const Cat &p)
{
	std::cout << "\033[0;32mcopy constructor called\033[0m" << std::endl;
	_type = p._type;
	_brain = p._brain;
}

void Cat::operator=(const Cat &p)
{
	std::cout << "\033[0;32mCopy assignment call\033[0m" << std::endl;
	_type = p._type;
	_brain = p._brain;
}

void	Cat::makeSound() const
{
	std::cout << "Miaou" << std::endl;
}