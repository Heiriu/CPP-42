/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thbierne <thbierne@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/23 07:42:32 by thbierne          #+#    #+#             */
/*   Updated: 2023/01/06 12:55:13 by thbierne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include "Form.hpp"

class PresidentialPardonForm : public Form
{

	public:
	
		PresidentialPardonForm();
		PresidentialPardonForm(const std::string target);
		PresidentialPardonForm(const std::string name, const std::string target);

		~PresidentialPardonForm();
		
		PresidentialPardonForm(PresidentialPardonForm const &p);
		void operator=(const PresidentialPardonForm &p);

		void launch();

	private:
	
};

#endif