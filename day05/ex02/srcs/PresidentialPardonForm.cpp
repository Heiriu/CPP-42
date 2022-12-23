/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thbierne <thbierne@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/23 07:42:46 by thbierne          #+#    #+#             */
/*   Updated: 2022/12/23 12:33:22 by thbierne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/PresidentialPardonForm.hpp"

/*			constructor			*/

PresidentialPardonForm::PresidentialPardonForm() : Form("PresidentialPardonForm", "default", 25, 5)
{
	std::cout << "\033[0;32mBureaucrat PresidentialPardonForm constructor created\033[0m" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const std::string target) : Form("PresidentialPardonForm", target, 25, 5)
{
	std::cout << "\033[0;32mBureaucrat PresidentialPardonForm constructor created\033[0m" << std::endl;
}


/*			copy constructor and assignment			*/

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &p)
{
	std::cout << "\033[0;32mcopy PresidentialPardonForm constructor called\033[0m" << std::endl;
	setSign(p.getSign());
	setToSign(p.getToSign());
	setToExec(p.getToExec());
}

void PresidentialPardonForm::operator=(const PresidentialPardonForm &p)
{
	std::cout << "\033[0;32mCopy PresidentialPardonForm assignment call\033[0m" << std::endl;
	setSign(p.getSign());
	setToSign(p.getToSign());
	setToExec(p.getToExec());
}


/*			destructor			*/

PresidentialPardonForm::~PresidentialPardonForm()
{
	std::cout << "\033[0;31mPresidentialPardonForm Destructor called for \033[0m" << getName() << std::endl;
}


/*			public fonction			*/

void	PresidentialPardonForm::launch()
{
	std::cout << getTarget() << "\033[0;32m has been forgive by Zaphod Beeblebrox\033[0m" << std::endl;
}
