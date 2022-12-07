/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thbierne <thbierne@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 11:33:47 by thbierne          #+#    #+#             */
/*   Updated: 2022/12/05 11:34:47 by thbierne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	std::cout << "\033[0;32mWrongAnimal Default constructor created\033[0m" << std::endl;
	setType("WrongAnimal");
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "\033[0;31mWrongAnimal Default Destructor called\033[0m" << std::endl;
}

void	WrongAnimal::makeSound() const
{
	std::cout << "WrongAnimal noises" << std::endl;
}



//		setter		//

void	WrongAnimal::setType(std::string type)
{
	_type = type;
}



//		getter		//

std::string	WrongAnimal::getType() const
{
	return (_type);
}