/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thbierne <thbierne@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 12:56:02 by thbierne          #+#    #+#             */
/*   Updated: 2022/11/08 15:54:33 by thbierne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main()
{
	int i;
	Zombie *pierre;

	pierre = zombieHorde(5, "Pierre");
	i = 0;
	while (i < 5)
	{
		pierre[i].announce();
		i++;
	}
	delete [] pierre;
}