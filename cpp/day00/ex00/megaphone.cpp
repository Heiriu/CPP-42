/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thbierne <thbierne@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 11:29:56 by thbierne          #+#    #+#             */
/*   Updated: 2022/10/11 11:32:58 by thbierne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int argc, char **argv)
{
	int i;
	int y;

	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISES *";
	else
	{
		y = 0;
		while (argv[++y])
		{
			i = -1;
			while (argv[y][++i])
			{
				if (argv[y][i] >= 'a' && argv[y][i] <= 'z')
					std::cout << (char)(argv[y][i] - 32);
				else
					std::cout << (char)(argv[y][i]);
			}
		}
	}
	std::cout << std::endl;
	return (0);
}