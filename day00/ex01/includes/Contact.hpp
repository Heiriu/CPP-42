/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thbierne <thbierne@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 09:41:41 by thbierne          #+#    #+#             */
/*   Updated: 2022/11/08 09:30:13 by thbierne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>
#include <string>
#include <stdlib.h>

class Contact
{
	public:

	Contact			putFirst(Contact c, std::string str);
	Contact			putLast(Contact c, std::string str);
	Contact			putNickName(Contact c, std::string str);
	Contact			putPhoneNumber(Contact c, std::string str);
	Contact			putDarkest(Contact c, std::string str);
	std::string		printFirst(Contact c);
	std::string		printLast(Contact c);
	std::string		printNickName(Contact c);
	std::string		printPhoneNumber(Contact c);
	std::string		printDarkest(Contact c);

	private:

	std::string m_firstName;
	std::string m_lastName;
	std::string m_nickName;
	std::string m_phoneNumber;
	std::string m_darkest;

};

#endif