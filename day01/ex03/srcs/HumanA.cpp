/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thbierne <thbierne@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 13:45:35 by thbierne          #+#    #+#             */
/*   Updated: 2022/11/11 08:55:25 by thbierne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon) : _name(name), _weapon(weapon)
{
	std::cout << _name << "\033[0;32m was created \033[0m" << std::endl;
}

HumanA::~HumanA()
{
	std::cout << _name << "\033[0;31m was destroyed\033[0m" << std::endl;
}

void	HumanA::attack()
{
	std::cout << _name << "\033[0;34m attacks with their \033[0m" << _weapon.getWeapon() << std::endl;
}