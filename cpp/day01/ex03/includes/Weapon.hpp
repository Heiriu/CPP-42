/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thbierne <thbierne@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 13:21:16 by thbierne          #+#    #+#             */
/*   Updated: 2022/11/08 15:04:31 by thbierne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <string>
#include <iostream>

class Weapon
{
	private:
	
		std::string	_weapon;

	public:

		Weapon();
		~Weapon();
		Weapon(std::string	str);

		std::string&	getType();
		void			setType(std::string str);
		std::string		getWeapon();

};

#endif