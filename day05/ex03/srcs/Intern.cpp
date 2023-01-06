/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thbierne <thbierne@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/06 10:00:19 by thbierne          #+#    #+#             */
/*   Updated: 2023/01/06 13:09:11 by thbierne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Intern.hpp"
#include "../includes/Form.hpp"
#include "../includes/PresidentialPardonForm.hpp"
#include "../includes/ShrubberyCreationForm.hpp"
#include "../includes/RobotomyRequestForm.hpp"

/*			constructor			*/

Intern::Intern()
{
	std::cout << "\033[0;32mIntern constructor created\033[0m" << std::endl;
}



/*			destructor			*/

Intern::~Intern()
{
	std::cout << "\033[0;32mIntern constructor created\033[0m" << std::endl;
}


/*			copy and assignment			*/

Intern::Intern(const Intern &p)
{
	std::cout << "\033[0;32mcopy constructor called\033[0m" << std::endl;
}

void	Intern::operator=(const Intern &p)
{
	std::cout << "\033[0;32mCopy assignment call\033[0m" << std::endl;
}


/*			public fonction			*/

Form*	Intern::makeForm(std::string name, std::string target)
{
	std::string str[3] = { "ShrubberyCreation", "RobotomyRequest", "PresidentialPardon"};
	{	
		int i;

		i = 0;
		while (i != 3)
		{
			if (name.compare(str[i]) == 0)
				break;
		}
		switch (i)
		{
			case 0:
				return new ShrubberyCreationForm(name, target);
			case 1:
				return new RobotomyRequestForm(name, target);
			case 2:
				return new PresidentialPardonForm(name, target);
		}
		throw  Intern::CannotCreatForm();
		return (NULL);
	}
}



/*			exception handle			*/

const char* Intern::CannotCreatForm::what() const throw()
{
	return ("Cannot create form");
}