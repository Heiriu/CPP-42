/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thbierne <thbierne@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 13:19:36 by thbierne          #+#    #+#             */
/*   Updated: 2022/11/11 08:46:00 by thbierne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP

#include "Weapon.hpp"

class HumanA
{

	public:

		HumanA(std::string name, Weapon &weapon);
		~HumanA();
		void	attack();
	
	private:

		std::string _name;
		Weapon&		_weapon;

};

#endif