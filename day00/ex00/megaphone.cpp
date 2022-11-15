/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thbierne <thbierne@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 11:29:56 by thbierne          #+#    #+#             */
/*   Updated: 2022/11/15 09:49:48 by thbierne         ###   ########.fr       */
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
		std::string str;
		while (argv[++y])
		{
			i = -1;
			str = argv[y];
			while (str[++i])
					std::cout << (char)toupper(str[i]);
		}
	}
	std::cout << std::endl;
	return (0);
}