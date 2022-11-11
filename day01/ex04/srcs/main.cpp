/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thbierne <thbierne@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 09:55:19 by thbierne          #+#    #+#             */
/*   Updated: 2022/11/11 15:55:20 by thbierne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Replace.hpp"

int		main(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cout << "use: [name files], [line search], [line replace]" << std::endl;
		return (1);
	}
	if (!argv[2][0])
	{
		std::cout << "cannot put empty string on second arg" << std::endl;
		return (-1);
	}
	Replace replace(argv[1], argv[2], argv[3]);
	if (replace.openFile() == -1)
		return (-1);
	replace.getNameReplace();
	replace.replaceFile();
	return (0);
}