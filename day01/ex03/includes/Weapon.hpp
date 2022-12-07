/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thbierne <thbierne@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 13:21:16 by thbierne          #+#    #+#             */
/*   Updated: 2022/12/07 15:06:05 by thbierne         ###   ########.fr       */
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

		Weapon&			const getType(Weapon &weapon);
		void			setType(std::string str);
		std::string		getWeapon();

};

#endif