/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thbierne <thbierne@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 16:12:42 by thbierne          #+#    #+#             */
/*   Updated: 2022/11/11 17:32:03 by thbierne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Harl.hpp"

void	complain(std::string level)
{
	(void)level;
}

//		fonction privee		//


void	Harl::debug()
{
	std::cout << "This is Debug" << std::endl;
}

void	Harl::info()
{
	std::cout << "This is info" << std::endl;
}

void	Harl::warning()
{
	std::cout << "This is warning" << std::endl;
}

void	Harl::error()
{
	std::cout << "This is error" << std::endl;
}


//			constructeur		//


Harl::Harl()
{
}


//			destruteur			//


Harl::~Harl()
{
}
