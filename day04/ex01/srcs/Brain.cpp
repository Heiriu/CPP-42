/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thbierne <thbierne@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 15:30:47 by thbierne          #+#    #+#             */
/*   Updated: 2022/12/07 10:54:02 by thbierne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Brain.hpp"

Brain::Brain()
{
	int i;

	std::cout << "\033[0;32mBrain Default constructor created\033[0m" << std::endl;
	i = 0;
	while (i < 99)
	{
		_ideas[i] = "ideas";
		i++;
	}
}

Brain::~Brain()
{
	std::cout << "\033[0;31mBrain Default Destructor called\033[0m" << std::endl;
}

Brain::Brain(const Brain &p)
{
	int i;

	std::cout << "\033[0;32mcopy constructor called\033[0m" << std::endl;
	i = 0;
	while (i < 99)
	{
		_ideas[i] = p._ideas[i];
		i++;
	}
}

void Brain::operator=(const Brain &p)
{
	int i;

	std::cout << "\033[0;32mCopy assignment call\033[0m" << std::endl;
	i = 0;
	while (i < 99)
	{
		_ideas[i] = p._ideas[i];
		i++;
	}
}