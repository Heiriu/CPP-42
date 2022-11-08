/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thbierne <thbierne@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 12:56:02 by thbierne          #+#    #+#             */
/*   Updated: 2022/11/08 15:49:34 by thbierne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main()
{
	Zombie *pierre;

	randomChump("Jhon");
	pierre = newZombie("Pierre");
	pierre->announce();
	delete pierre;
}