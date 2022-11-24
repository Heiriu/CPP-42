/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thbierne <thbierne@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 10:57:40 by thbierne          #+#    #+#             */
/*   Updated: 2022/11/24 13:02:42 by thbierne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

		std::string	getName();

	private:
	
		std::string		_name;
		int				_hitPoint;
		int				_energyPoint;
		int				_attackDamage;
};
