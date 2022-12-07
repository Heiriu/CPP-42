/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thbierne <thbierne@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 11:06:40 by thbierne          #+#    #+#             */
/*   Updated: 2022/12/05 11:13:07 by thbierne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/WrongCat.hpp"

WrongCat::WrongCat()
{
	std::cout << "\033[0;32mWrong Cat Default constructor created\033[0m" << std::endl;
	setType("Animal");
}

WrongCat::~WrongCat()
{
	std::cout << "\033[0;31mWrong Cat Destructor called\033[0m" << std::endl;
}

void	WrongCat::makeSound() const
{
	std::cout << "WrongCat noises" << std::endl;
}