/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thbierne <thbierne@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 10:58:46 by thbierne          #+#    #+#             */
/*   Updated: 2022/11/24 13:24:44 by thbierne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	std::cout << "\033[0;32mDefault constructor created\033[0m" << std::endl;
	_name = "Default";
	_hitPoint = 10;
	_energyPoint = 10;
	_attackDamage = 0;
}

ClapTrap::ClapTrap(std::string name)
{
	std::cout << "\033[0;32mClapTrap \033[0m" << name << "\033[0;32m created\033[0m" << std::endl;
	_name = name;
	_hitPoint = 10;
	_energyPoint = 10;
	_attackDamage = 0;
}

ClapTrap::ClapTrap(const ClapTrap &p)
{
	std::cout << "\033[0;32mcopy constructor called\033[0m" << std::endl;
	_name = p._name;
	_energyPoint = p._energyPoint;
	_attackDamage = p._attackDamage;
}

void ClapTrap::operator=(const ClapTrap &p)
{
	std::cout << "\033[0;32mCopy assignment call\033[0m" << std::endl;
	_name = p._name;
	_energyPoint = p._energyPoint;
	_attackDamage = p._attackDamage;
}

ClapTrap::~ClapTrap()
{
	std::cout << "\033[0;31mDefault destructor called\033[0m" << std::endl;
}


void ClapTrap::attack(const std::string& target)
{
	if (this->_hitPoint == 0)
		std::cout << "\033[0;33mClapTrap \033[0m" << this->_name << "\033[0;33m is broken ! He cannot attack !\033[0m" << std::endl;
	else if (this->_energyPoint == 0)
		std::cout << "\033[0;33mClapTrap \033[0m" << this->_name << "\033[0;33m has no more energy ! He cannot attack\033[0m" << std::endl;
	else
	{
		std::cout << "\033[0;31mClapTrap \033[0m" << this->_name << "\033[0;31m attacks \033[0m" << target << "\033[0;31m , causing \033[0m" << this->_attackDamage << "\033[0;31m points of damage!\033[0m" << std::endl;
		this->_energyPoint--;
	}
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (this->_hitPoint == 0)
		std::cout << "\033[0;33mClapTrap \033[0m" << this->_name << "\033[0;33m is already broken !\033[0m" << std::endl;
	else
	{
		std::cout << "\033[0;31mClapTrap \033[0m" << this->_name << "\033[0;31m take \033[0m" << amount << "\033[0;31m points of damage!\033[0m" << std::endl;
		this->_hitPoint -= amount;
		if (this->_hitPoint <= 0)
			this->_hitPoint = 0;
	}
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_hitPoint == 0)
		std::cout << "\033[0;33mClapTrap \033[0m" << this->_name << "\033[0;33m is broken, he cannot repair himself !\033[0m" << std::endl;
	else if (this->_energyPoint == 0)
		std::cout << "\033[0;33mClapTrap \033[0m" << this->_name << "\033[0;33m has no more energy ! he cannot repair himself\033[0m" << std::endl;
	else
	{
		std::cout << "\033[0;32mClapTrap \033[0m" << this->_name << "\033[0;32m repair himself for \033[0m" << amount << "\033[0;32m life point !\033[0m" << std::endl;
		this->_hitPoint += amount;
		this->_energyPoint--;
	}
}

std::string	ClapTrap::getName()
{
	return (this->_name);
}