/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thbierne <thbierne@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 10:47:48 by thbierne          #+#    #+#             */
/*   Updated: 2022/12/07 12:09:26 by thbierne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Animal.hpp"

Animal::Animal()
{
	std::cout << "\033[0;32mAnimal Default constructor created\033[0m" << std::endl;
	setType("Animal");
}

Animal::~Animal()
{
	std::cout << "\033[0;31mAnimal Default Destructor called\033[0m" << std::endl;
}

void	Animal::makeSound() const
{
	std::cout << "animal noises" << std::endl;
}



//		setter		//

void	Animal::setType(std::string type)
{
	_type = type;
}



//		getter		//

std::string	Animal::getType() const
{
	return (_type);
}