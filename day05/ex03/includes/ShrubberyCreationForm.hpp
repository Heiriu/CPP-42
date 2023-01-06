/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thbierne <thbierne@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/23 09:56:00 by thbierne          #+#    #+#             */
/*   Updated: 2023/01/06 12:43:03 by thbierne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include "Form.hpp"

class ShrubberyCreationForm : public Form
{

	public:
	
		ShrubberyCreationForm();
		ShrubberyCreationForm(const std::string target);
		ShrubberyCreationForm(const std::string name, const std::string target);
		~ShrubberyCreationForm();

		ShrubberyCreationForm(ShrubberyCreationForm const &p);
		void operator=(const ShrubberyCreationForm &p);

		void	launch();

	private:

};

#endif