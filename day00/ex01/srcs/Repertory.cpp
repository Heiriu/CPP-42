/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Repertory.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thbierne <thbierne@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 10:02:03 by thbierne          #+#    #+#             */
/*   Updated: 2022/11/16 13:58:05 by thbierne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/PhoneBook.hpp"

void	clear()
{
    //std::cout << "\x1B[2J\x1B[H";
	std::system("clear");
}

void    readLineSafe(std::string& str)
{
    bool    fail = false;

    do {
		getline(std::cin, str);
        if (std::cin.eof()) {
            if (std::cin.fail()) {
                fail = true;
            }
			std::cin.clear();
            if (fail) {
                std::cin.putback('\n');
            } else {
                std::cout << std::endl;
            }
        }
    } while (str.size() == 0);
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
	clear();
	std::cout << "\033[0;32m Welcome to phonebook \033[0m" << std::endl << std::endl;
	printHelp();
	std::cout << "\"HELP\"  if you need a reminder" << std::endl << std::endl;
	while (1)
	{
		std::cout << "pls enter a command: ";
		readLineSafe(str);
		clear();
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
			std::cout << "EXIT" << std::endl;
			return (0);
		}
		else if (str.compare("HELP") == 0)
			printHelp();
		else if (str.compare("") != 0)
			std::cout << "\033[0;31mcommand not found\033[0m" << std::endl;
	}
	return (0);
}
