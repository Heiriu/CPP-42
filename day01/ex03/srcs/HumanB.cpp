/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thbierne <thbierne@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 13:58:56 by thbierne          #+#    #+#             */
/*   Updated: 2022/11/08 15:39:16 by thbierne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/HumanB.hpp"

HumanB::HumanB() : _name("Tao") 
{
	//std::cout << _name << " was created" << std::endl;
}

HumanB::~HumanB()
{
	std::cout << _name << "\033[0;31m was destroyed\033[0m" << std::endl;
}

HumanB::HumanB(std::string name)
{
	_name = name;
	std::cout << _name << "\033[0;32m was created\033[0m" << std::endl;
}

void	HumanB::attack()
{
	std::cout << _name << "\033[0;34m attacks with their \033[0m" << _weapon.getWeapon() << std::endl;
}