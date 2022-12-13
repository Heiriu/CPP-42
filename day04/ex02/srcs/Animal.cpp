/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thbierne <thbierne@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 10:47:48 by thbierne          #+#    #+#             */
/*   Updated: 2022/12/13 09:24:56 by thbierne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Animal.hpp"

AAnimal::AAnimal()
{
	std::cout << "\033[0;32mAnimal Default constructor created\033[0m" << std::endl;
	setType("Animal");
}

AAnimal::~AAnimal()
{
	std::cout << "\033[0;31mAnimal Default Destructor called\033[0m" << std::endl;
}

void	AAnimal::makeSound() const
{
	std::cout << "animal noises" << std::endl;
}



//		setter		//

void	AAnimal::setType(std::string type)
{
	_type = type;
}



//		getter		//

std::string	AAnimal::getType() const
{
	return (_type);
}