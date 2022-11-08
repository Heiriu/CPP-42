/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thbierne <thbierne@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 14:12:27 by thbierne          #+#    #+#             */
/*   Updated: 2022/11/08 15:59:03 by thbierne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie	*zombieHorde(int N, std::string name)
{
	int i;

	Zombie *Zomb = new Zombie[N];
	i = 0;
	while (i < N)
	{
		Zomb[i].setName(name);
		i++;
	}
	return (Zomb);
}