/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thbierne <thbierne@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 14:44:06 by thbierne          #+#    #+#             */
/*   Updated: 2022/11/07 14:26:02 by thbierne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int	main()
{
	std::string brain;
	std::string	*PTR;
	std::string	&REF = brain;
	
	PTR = NULL;
	brain = "HI THIS IS BRAIN";
	PTR = &brain;

	std::cout << &brain << std::endl;
	std::cout << PTR << std::endl;
	std::cout << &REF << std::endl;

	std::cout << brain << std::endl;
	std::cout << *PTR << std::endl;
	std::cout << REF << std::endl;
}
