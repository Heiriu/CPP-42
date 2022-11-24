/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thbierne <thbierne@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 10:57:40 by thbierne          #+#    #+#             */
/*   Updated: 2022/11/24 14:46:58 by thbierne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>
#include <string>

class ClapTrap
{

	public:
	
		ClapTrap();
		ClapTrap(std::string name);
		~ClapTrap();

		ClapTrap(const ClapTrap &p);
		void operator=(const ClapTrap &p);

		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);

		void setName(std::string name);
		void setHitPoint(int nbr);
		void setEnergyPoint(int nbr);
		void setAttackDamage(int nbr);

		std::string	getName();
		int			getHitPoint();
		int			getEnergyPoint();
		int			getAttackDamage();

	private:
	
		std::string		_name;
		int				_hitPoint;
		int				_energyPoint;
		int				_attackDamage;
};

#endif