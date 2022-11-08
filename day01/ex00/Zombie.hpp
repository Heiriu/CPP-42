/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thbierne <thbierne@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 10:41:22 by thbierne          #+#    #+#             */
/*   Updated: 2022/11/08 15:49:48 by thbierne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <string>

class Zombie
{
	public:

	Zombie();
	~Zombie();
	void 	announce(void);
	void	setName(std::string name);

	private :

	std::string _name;
};

void randomChump(std::string name);
Zombie	*newZombie(std::string name);

#endif