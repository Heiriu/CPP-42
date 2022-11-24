/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thbierne <thbierne@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 15:02:13 by thbierne          #+#    #+#             */
/*   Updated: 2022/11/24 15:06:35 by thbierne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/FragTrap.hpp"

FragTrap::FragTrap()
{
	std::cout << "\033[0;32mDefault Frag constructor created\033[0m" << std::endl;
	setName("defaut");
	setHitPoint(100);
	setEnergyPoint(100);
	setAttackDamage(30);
}

FragTrap::FragTrap(std::string name)
{
	std::cout << "\033[0;32mFragTrap \033[0m" << name << "\033[0;32m created\033[0m" << std::endl;
	setName(name);
	setHitPoint(100);
	setEnergyPoint(100);
	setAttackDamage(30);
}

FragTrap::~FragTrap()
{
	std::cout << "\033[0;31mDefault Frag destructor called\033[0m" << std::endl;
}

void FragTrap::highFivesGuys()
{
	std::cout << "i am " << getName() << " can you hight five me ?";
}