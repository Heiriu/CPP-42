/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thbierne <thbierne@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 13:17:47 by thbierne          #+#    #+#             */
/*   Updated: 2023/01/06 09:06:46 by thbierne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Bureaucrat.hpp"
#include "../includes/PresidentialPardonForm.hpp"
#include "../includes/ShrubberyCreationForm.hpp"
#include "../includes/RobotomyRequestForm.hpp"

int main()
{

	try
	{
		ShrubberyCreationForm a("A2");
		PresidentialPardonForm b("2B");
		Bureaucrat alfred("Alfred", 1);
		//Bureaucrat jhon("Jhon", 100);

		std::cout << a;
		alfred.executeForm(a);
		std::cout << b;
		b.launch();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
}