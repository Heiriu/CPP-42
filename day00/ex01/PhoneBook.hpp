/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thbierne <thbierne@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 14:52:27 by thbierne          #+#    #+#             */
/*   Updated: 2022/10/27 14:57:37 by thbierne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include "Contact.hpp"

class PhoneBook
{
	public:

	PhoneBook 	addContact(PhoneBook phone, int nbr);
	void		searchContact(PhoneBook phone, int nbr);
	void 		exitPhonebook();
	void		print_tab_contact(PhoneBook phone, int index);
	void		print_phone_contact(Contact c);

	private:
	
	Contact contact[8];
};

#endif