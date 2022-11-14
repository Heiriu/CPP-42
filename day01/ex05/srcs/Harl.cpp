/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thbierne <thbierne@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 16:12:42 by thbierne          #+#    #+#             */
/*   Updated: 2022/11/14 12:36:38 by thbierne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Harl.hpp"

void	Harl::complain(std::string level)
{
	std::string comp[4] = {"debug", "info", "warning", "error"};
	void (Harl::*fct[4])() = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};

	for (int i = 0; i < 4; i++)
	{
		if (comp[i] == level)
			(this->*fct[i])();
	}
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
