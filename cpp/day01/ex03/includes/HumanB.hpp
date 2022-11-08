/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thbierne <thbierne@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 13:20:50 by thbierne          #+#    #+#             */
/*   Updated: 2022/11/08 15:32:27 by thbierne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "Weapon.hpp"

class HumanB
{
	private:
	
		std::string	_name;
		Weapon&		_weapon;

	public:

		HumanB();
		~HumanB();
		HumanB(std::string name);
		void	attack();
};

#endif