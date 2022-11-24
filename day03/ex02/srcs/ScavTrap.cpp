/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thbierne <thbierne@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 14:07:27 by thbierne          #+#    #+#             */
/*   Updated: 2022/11/24 14:51:08 by thbierne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ScavTrap.hpp"

ScavTrap::ScavTrap()
{
	std::cout << "\033[0;32mDefault Scav constructor created\033[0m" << std::endl;
	setName("defaut");
	setHitPoint(100);
	setEnergyPoint(50);
	setAttackDamage(20);
	_guard = 0;
}

ScavTrap::ScavTrap(std::string name)
{
	std::cout << "\033[0;32mScavTrap \033[0m" << name << "\033[0;32m created\033[0m" << std::endl;
	setName(name);
	setHitPoint(100);
	setEnergyPoint(50);
	setAttackDamage(20);
	_guard = 0;
}

ScavTrap::~ScavTrap()
{
	std::cout << "\033[0;31mDefault Scav destructor called\033[0m" << std::endl;
}

void ScavTrap::guardGate()
{
	if (_guard == 0)
	{
		std::cout << this->getName() << "\033[0;31m Guard gate activated\033[0m" << std::endl;
		_guard = 1;
	}
	else
	{
		std::cout << this->getName() << "\033[0;31m Guard gate desactivated\033[0m" << std::endl;
		_guard = 0;
	}
}