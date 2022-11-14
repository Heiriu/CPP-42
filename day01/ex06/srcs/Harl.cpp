/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thbierne <thbierne@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 16:12:42 by thbierne          #+#    #+#             */
/*   Updated: 2022/11/14 14:02:40 by thbierne         ###   ########.fr       */
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
		{
			switch (i)
			{
				case 0:
				{
					(this->*fct[i++])();
					(this->*fct[i++])();
					(this->*fct[i++])();
					(this->*fct[i])();
					break;
				}
				case 1:
				{
					(this->*fct[i++])();
					(this->*fct[i++])();
					(this->*fct[i])();
					break;
				}
				case 2:
				{
					(this->*fct[i++])();
					(this->*fct[i])();
					break;
				}
				case 3:
				{
					(this->*fct[i])();
					break;
				}
			}
		}
	}
}

//		fonction privee		//


void	Harl::debug()
{
	std::cout << " [DEBUG] " << std::endl;
	std::cout << "This is Debug" << std::endl << std::endl;
}

void	Harl::info()
{
	std::cout << " [INFO] " << std::endl;
	std::cout << "This is info" << std::endl << std::endl;
}

void	Harl::warning()
{
	std::cout << " [WARNING] " << std::endl;
	std::cout << "This is warning" << std::endl << std::endl;
}

void	Harl::error() 
{
	std::cout << " [ERROR] " << std::endl;
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
