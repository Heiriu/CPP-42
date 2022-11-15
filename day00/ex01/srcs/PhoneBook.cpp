/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thbierne <thbierne@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 12:14:37 by thbierne          #+#    #+#             */
/*   Updated: 2022/11/15 10:05:20 by thbierne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/PhoneBook.hpp"
#include "../includes/Contact.hpp"

void    readLineSafe(std::string& str);
void	clear();

void	print_space()
{
		std::cout << std::setfill (' ') << std::setw (10);
}

void	PhoneBook::print_phone_contact(Contact c)
{
	std::cout << "\033[0;34mFirst Name: \033[0m" << c.printFirst(c) << std::endl;
	std::cout << "\033[0;34mLast Name: \033[0m" << c.printLast(c) << std::endl;
	std::cout << "\033[0;34mNick Name: \033[0m" << c.printNickName(c) << std::endl;
	std::cout << "\033[0;34mPhone Number: \033[0m" << c.printPhoneNumber(c) << std::endl;
	std::cout << "\033[0;34mDarkest Secret: \033[0m" << c.printDarkest(c) << std::endl;
}

void	PhoneBook::print_tab_contact(PhoneBook phone, int index)
{
	int			i;
	std::string	test; 
	Contact		contact;

	i = 1;
	std::cout << "_____________________________________________\n";
    std::cout << "|          |          |          |          |\n";
	std::cout << "|  index   |first name|last  name|nick  name|" << std::endl;
	std::cout << "|__________|__________|__________|__________|" << std::endl;
	while (i <= (index + 1) && i < 9)
	{
		std::cout << "|         " << i << "|";
		test = contact.printFirst(phone.contact[i - 1]);
		if (test.length() <= 10)
			print_space();
		else if (test.length() > 10)
		{
			test.resize(9, ' ');
			test.resize(10, '.');
		}
		std::cout << test << '|';
		test = contact.printLast(phone.contact[i - 1]);
		if (test.length() <= 10)
			print_space();
		else if (test.length() > 10)
		{
			test.resize(9, ' ');
			test.resize(10, '.');
		}
		std::cout << test << '|';
		test = contact.printNickName(phone.contact[i - 1]);
		if (test.length() <= 10)
			print_space();
		else if (test.length() > 10)
		{
			test.resize(9, ' ');
			test.resize(10, '.');
		}
		std::cout << test << '|' << std::endl;
		i++;
	}
	std::cout << "|__________|__________|__________|__________|" << std::endl;
	std::cout << std::endl;
}

PhoneBook	PhoneBook::addContact(PhoneBook phone, int nbr)
{
	Contact		test;
	std::string	str;
	

	if (nbr >= 8)
		nbr -= 8;
	clear();
	std::cout << "enter your first name: ";
	readLineSafe(str);
	clear();
	phone.contact[nbr] = test.putFirst(phone.contact[nbr], str);
	std::cout << "enter your last name: ";
	readLineSafe(str);
	clear();
	phone.contact[nbr] = test.putLast(phone.contact[nbr], str);
	std::cout << "enter your nickname: ";
	readLineSafe(str);
	clear();
	phone.contact[nbr] = test.putNickName(phone.contact[nbr], str);
	std::cout << "enter your phone number: ";
	readLineSafe(str);
	clear();
	phone.contact[nbr] = test.putPhoneNumber(phone.contact[nbr], str);
	std::cout << "enter your darkest secret: ";
	readLineSafe(str);
	clear();
	phone.contact[nbr] = test.putDarkest(phone.contact[nbr], str);
	return (phone);
}

void	PhoneBook::searchContact(PhoneBook phone, int nbr)
{
	std::string str;
	int			c;

	clear();
	if (nbr == -1)
	{
		std::cout << "the list of contact is empty" << std::endl;
		return ;
	}
	while (1)
	{
		print_tab_contact(phone, nbr);
		std::cout << "enter a number between 1 to 8: ";
		readLineSafe(str);
		clear();
		if ((str[0] >= '1' || str[0] <= '8') && !str[1])
		{
			c = str[0] - 48;
			if (c > nbr + 1)
				std::cout << "\033[0;31m [index not found, pls try again] \033[0m" << std::endl << std::endl;
			else
			{
				phone.print_phone_contact(contact[c - 1]);
				return ;
			}
		}
		else
			std::cout << "\033[0;31m [wrong number enter, pls try again] \033[0m" << std::endl;
	}
	return ;
}
