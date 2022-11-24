/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thbierne <thbierne@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 10:58:46 by thbierne          #+#    #+#             */
/*   Updated: 2022/11/24 14:48:14 by thbierne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ClapTrap.hpp"

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
	if (_hitPoint == 0)
		std::cout << "\033[0;33mClapTrap \033[0m" << this->_name << "\033[0;33m is broken ! He cannot attack !\033[0m" << std::endl;
	else if (_energyPoint == 0)
		std::cout << "\033[0;33mClapTrap \033[0m" << _name << "\033[0;33m has no more energy ! He cannot attack\033[0m" << std::endl;
	else
	{
		std::cout << "\033[0;31mClapTrap \033[0m" << this->_name << "\033[0;31m attacks \033[0m" << target << "\033[0;31m , causing \033[0m" << _attackDamage << "\033[0;31m points of damage!\033[0m" << std::endl;
		_energyPoint--;
	}
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (_hitPoint == 0)
		std::cout << "\033[0;33mClapTrap \033[0m" << _name << "\033[0;33m is already broken !\033[0m" << std::endl;
	else
	{
		std::cout << "\033[0;31mClapTrap \033[0m" << _name << "\033[0;31m take \033[0m" << amount << "\033[0;31m points of damage!\033[0m" << std::endl;
		_hitPoint -= amount;
		if (_hitPoint <= 0)
			_hitPoint = 0;
	}
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (_hitPoint == 0)
		std::cout << "\033[0;33mClapTrap \033[0m" << _name << "\033[0;33m is broken, he cannot repair himself !\033[0m" << std::endl;
	else if (_energyPoint == 0)
		std::cout << "\033[0;33mClapTrap \033[0m" << _name << "\033[0;33m has no more energy ! he cannot repair himself\033[0m" << std::endl;
	else
	{
		std::cout << "\033[0;32mClapTrap \033[0m" << _name << "\033[0;32m repair himself for \033[0m" << amount << "\033[0;32m life point !\033[0m" << std::endl;
		_hitPoint += amount;
		_energyPoint--;
	}
}

std::string	ClapTrap::getName()
{
	return (_name);
}

int	ClapTrap::getHitPoint()
{
	return (_hitPoint);
}

int	ClapTrap::getEnergyPoint()
{
	return (_energyPoint);
}

int	ClapTrap::getAttackDamage()
{
	return (_attackDamage);
}

void	ClapTrap::setName(std::string name)
{
	_name = name;
}

void	ClapTrap::setHitPoint(int nbr)
{
	_hitPoint = nbr;
}

void	ClapTrap::setEnergyPoint(int nbr)
{
	_energyPoint = nbr;
}

void	ClapTrap::setAttackDamage(int nbr)
{
	_attackDamage = nbr;
}