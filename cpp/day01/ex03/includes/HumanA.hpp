/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thbierne <thbierne@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 13:19:36 by thbierne          #+#    #+#             */
/*   Updated: 2022/11/08 15:37:10 by thbierne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP

#include "Weapon.hpp"

class HumanA
{
	private:

		std::string _name;
		Weapon*		_weapon;

	public:

		HumanA();
		~HumanA();
		HumanA(std::string name, Weapon *weapon);
		void	attack();
		
};

#endif