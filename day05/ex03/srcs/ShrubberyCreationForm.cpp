/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thbierne <thbierne@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/23 09:55:48 by thbierne          #+#    #+#             */
/*   Updated: 2023/01/06 12:41:23 by thbierne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ShrubberyCreationForm.hpp"


/*			constructor			*/

ShrubberyCreationForm::ShrubberyCreationForm() : Form("ShrubberyCreationForm", "default", 145, 137)
{
	std::cout << "\033[0;32mBureaucrat ShrubberyCreationForm constructor created\033[0m" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string target) : Form("ShrubberyCreationForm", target, 145, 137)
{
	std::cout << "\033[0;32mBureaucrat ShrubberyCreationForm constructor created\033[0m" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string name, const std::string target) : Form(name, target, 145, 137)
{
	std::cout << "\033[0;32mBureaucrat ShrubberyCreationForm constructor created\033[0m" << std::endl;
}

/*			copy constructor and assigment			*/

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &p)
{
	std::cout << "\033[0;32mcopy ShrubberyCreationForm constructor called\033[0m" << std::endl;
	setSign(p.getSign());
	setToSign(p.getToSign());
	setToExec(p.getToExec());
}

void ShrubberyCreationForm::operator=(const ShrubberyCreationForm &p)
{
	std::cout << "\033[0;32mCopy ShrubberyCreationForm assignment call\033[0m" << std::endl;
	setSign(p.getSign());
	setToSign(p.getToSign());
	setToExec(p.getToExec());
}



/*			destructor			*/

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	std::cout << "\033[0;31mShrubberyCreationForm Destructor called for \033[0m" << getName() << std::endl;
}



/*			public fonction			*/

void	ShrubberyCreationForm::launch()
{
	std::string file;

	file = getTarget();
	file.append("_shrubbery");
	std::ofstream out(file.c_str(), std::ios::out);
	out << "     .{{}}}}}}." << std::endl;
	out << "    {{{{{{(`)}}}." << std::endl;
	out << "   {{{(`)}}}}}}}}}" << std::endl;
	out << "  }}}}}}}}}{{(`){{{" << std::endl;
	out << "  }}}}{{{{(`)}}{{{{" << std::endl;
	out << " {{{(`)}}}}}}}{}}}}}" << std::endl;
	out << "{{{{{{{{(`)}}}}}}}}}}" << std::endl;
	out << "{{{{{{{}{{{{(`)}}}}}}" << std::endl;
	out << " {{{{{(`)   {{{{(`)}'" << std::endl;
	out << "  `'''' |   | ''''`" << std::endl;
	out << "  (`)  /     \\" << std::endl;
	out << " ~~~~~~~~~~~~~~~~~~~" << std::endl;
	out.close();
}