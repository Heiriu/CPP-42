/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thbierne <thbierne@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/23 10:23:58 by thbierne          #+#    #+#             */
/*   Updated: 2023/01/06 12:51:40 by thbierne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include <iostream>
#include <string>
#include <cstdlib>
#include "Form.hpp"

class RobotomyRequestForm : public Form
{

	public:
	
		RobotomyRequestForm();
		RobotomyRequestForm(const std::string target);
		RobotomyRequestForm(const std::string name, const std::string target);
		
		~RobotomyRequestForm();

		RobotomyRequestForm(RobotomyRequestForm const &p);

		void operator=(const RobotomyRequestForm &p);

		void launch();

	private:

};

#endif