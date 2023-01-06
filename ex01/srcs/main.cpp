/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thbierne <thbierne@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 13:17:47 by thbierne          #+#    #+#             */
/*   Updated: 2023/01/06 09:47:31 by thbierne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Bureaucrat.hpp"
#include "../includes/Form.hpp"

int main()
{
	Bureaucrat john("John", 2);
	Bureaucrat jim("Jim", 149);
	Form A("A", 150, 70);

	try
	{
		A.beSigned(jim);
		A.beSigned(john);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
}