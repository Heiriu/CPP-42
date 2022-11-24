/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thbierne <thbierne@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 12:10:38 by thbierne          #+#    #+#             */
/*   Updated: 2022/11/24 14:34:29 by thbierne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ClapTrap.hpp"
#include "../includes/ScavTrap.hpp"

int main()
{
	ClapTrap a;
	ScavTrap b("Clap");
	ScavTrap c("John");
	ScavTrap d("Billy");

	b.attack(a.getName());
	std::cout << std::endl;

	d.attack(c.getName());
	d.attack(c.getName());
	d.attack(c.getName());
	d.attack(c.getName());
	d.attack(c.getName());
	d.attack(c.getName());
	d.attack(c.getName());
	d.attack(c.getName());
	d.attack(c.getName());
	d.attack(c.getName());
	d.attack(c.getName());
	d.beRepaired(100);
	std::cout << std::endl;

	b.guardGate();
	b.attack(c.getName());
	b.guardGate();
	c.takeDamage(99);
	c.beRepaired(1);
	c.takeDamage(1);
	c.takeDamage(1);
	c.takeDamage(1);
	c.beRepaired(10);
	std::cout << std::endl;
	
	return (0);
}