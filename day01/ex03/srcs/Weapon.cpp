/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thbierne <thbierne@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 13:36:39 by thbierne          #+#    #+#             */
/*   Updated: 2022/11/11 08:59:42 by thbierne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Weapon.hpp"

Weapon::~Weapon()
{
	std::cout << _weapon << "\033[0;31m was destroyed\033[0m" << std::endl;
}

Weapon::Weapon(std::string	str)
{
	_weapon = str;
	std::cout << _weapon << "\033[0;32m was created\033[0m" << std::endl;
}

std::string		Weapon::getWeapon()
{
	return (_weapon);
}

void			Weapon::setType(std::string str)
{
	_weapon = str;
}

Weapon&			Weapon::getType(Weapon &weapon)
{
	return (weapon);
}