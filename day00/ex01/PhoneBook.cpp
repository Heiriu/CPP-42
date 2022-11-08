/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thbierne <thbierne@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 12:14:37 by thbierne          #+#    #+#             */
/*   Updated: 2022/11/07 13:38:45 by thbierne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

void	clear()
{
    std::cout << "\x1B[2J\x1B[H";
}

void	print_space(int nbr)
{
	int i;

	i = 10 - nbr;
	while (i > 0)
	{
		std::cout << ' ';
		i--;
	}
}

void	PhoneBook::print_phone_contact(Contact c)
{
	std::cout << "First Name:" << c.printFirst(c) << std::endl;
	std::cout << "Last Name:" << c.printLast(c) << std::endl;
	std::cout << "Nick Name:" << c.printNickName(c) << std::endl;
	std::cout << "Phone Number:" << c.printPhoneNumber(c) << std::endl;
	std::cout << "Darkest Secret:" << c.printDarkest(c) << std::endl;
}

void	PhoneBook::print_tab_contact(PhoneBook phone, int index)
{
	int			i;
	std::string	test; 
	Contact		contact;

	i = 1;
	std::cout << "|  index   |first name|last  name|nick  name|" << std::endl;
	std::cout << "|__________|__________|__________|__________|" << std::endl;
	while (i <= (index + 1) && i < 9)
	{
		std::cout << "|    " << i << "     |";
		test = contact.printFirst(phone.contact[i - 1]);
		if (test.length() < 10)
			print_space(test.length());
		else if (test.length() > 10)
		{
			test.resize(9, ' ');
			test.resize(10, '.');
		}
		std::cout << test << '|';
		test = contact.printLast(phone.contact[i - 1]);
		if (test.length() < 10)
			print_space(test.length());
		else if (test.length() > 10)
		{
			test.resize(9, ' ');
			test.resize(10, '.');
		}
		std::cout << test << '|';
		test = contact.printNickName(phone.contact[i - 1]);
		if (test.length() < 10)
			print_space(test.length());
		else if (test.length() > 10)
		{
			test.resize(9, ' ');
			test.resize(10, '.');
		}
		std::cout << test << '|' << std::endl;
		i++;
	}
	std::cout << "|___________________________________________|" << std::endl;
	std::cout << std::endl;
}

PhoneBook	PhoneBook::addContact(PhoneBook phone, int nbr)
{
	Contact		test;
	std::string	str;
	
	clear();
	if (nbr >= 8)
		nbr -= 8;
	std::cout << "enter your first name: ";
	std::getline (std::cin,str);
	phone.contact[nbr] = test.putFirst(phone.contact[nbr], str);
	clear();
	std::cout << "enter your last name: ";
	std::getline (std::cin,str);
	phone.contact[nbr] = test.putLast(phone.contact[nbr], str);
	clear();
	std::cout << "enter your nickname: ";
	std::getline (std::cin,str);
	phone.contact[nbr] = test.putNickName(phone.contact[nbr], str);
	clear();
	std::cout << "enter your phone number: ";
	std::getline (std::cin,str);
	phone.contact[nbr] = test.putPhoneNumber(phone.contact[nbr], str);
	clear();
	std::cout << "enter your darkest secret: ";
	std::getline (std::cin,str);
	phone.contact[nbr] = test.putDarkest(phone.contact[nbr], str);
	clear();
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
		std::getline (std::cin,str);
		clear();
		if ((str[0] >= '1' || str[0] <= '8') && !str[1])
		{
			c = str[0] - 48;
			if (c > nbr + 1)
				std::cout << "index not found, pls try again" << std::endl;
			else
			{
				phone.print_phone_contact(contact[c - 1]);
				return ;
			}
		}
		else
			std::cout << "wrong number enter, pls try again" << std::endl;
	}
	return ;
}
