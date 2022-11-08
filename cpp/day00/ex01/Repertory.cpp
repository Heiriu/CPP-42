/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Repertory.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thbierne <thbierne@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 10:02:03 by thbierne          #+#    #+#             */
/*   Updated: 2022/10/27 15:01:27 by thbierne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

void clear_t()
{
    std::cout << "\x1B[2J\x1B[H";
}

void	printHelp()
{
	std::cout << "\"ADD\"  to add a new contact" << std::endl;
	std::cout << "\"SEARCH\"  to search a contact into the phonebook" << std::endl;
	std::cout << "\"EXIT\"  to exit the phonebook" << std::endl;
}

int main()
{
	std::string str;
	PhoneBook	phone;
	int			nbr;

	nbr = -1;
	clear_t();
	std::cout << "Welcome to phonebook" << std::endl;
	printHelp();
	std::cout << "\"HELP\"  if you need a reminder" << std::endl << std::endl;
	while (1)
	{
		std::cout << "pls enter a command: ";
		std::getline (std::cin,str);
		if (str.compare("ADD") == 0)
		{
			nbr++;
			if (nbr > 15)
				nbr = 8;
			phone = phone.addContact(phone, nbr);
		}
		else if (str.compare("SEARCH") == 0)
			phone.searchContact(phone, nbr);
		else if (str.compare("EXIT") == 0)
		{
			clear_t();
			std::cout << "EXIT" << std::endl;
			return (0);
		}
		else if (str.compare("") != 0)
			std::cout << "command not found" << std::endl;
	}
	return (0);
}
