/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thbierne <thbierne@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 13:50:36 by thbierne          #+#    #+#             */
/*   Updated: 2022/10/12 10:44:21 by thbierne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact	Contact::putFirst(Contact c, std::string str)
{
	c.m_firstName.assign(str);
	return (c);
}

Contact	Contact::putLast(Contact c, std::string str)
{
	c.m_lastName.assign(str);
	return (c);
}

Contact	Contact::putNickName(Contact c, std::string str)
{
	c.m_nickName.assign(str);
	return (c);
}

Contact	Contact::putPhoneNumber(Contact c, std::string str)
{
	c.m_phoneNumber.assign(str);
	return (c);
}

Contact	Contact::putDarkest(Contact c, std::string str)
{
	c.m_darkest.assign(str);
	return (c);
}

std::string		Contact::printFirst(Contact c)
{
	return (c.m_firstName);
}

std::string		Contact::printLast(Contact c)
{
	return (c.m_lastName);
}

std::string		Contact::printNickName(Contact c)
{
	return (c.m_nickName);
}

std::string		Contact::printPhoneNumber(Contact c)
{
	return (c.m_phoneNumber);
}

std::string		Contact::printDarkest(Contact c)
{
	return (c.m_darkest);
}