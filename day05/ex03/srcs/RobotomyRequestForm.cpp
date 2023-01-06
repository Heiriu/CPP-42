/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thbierne <thbierne@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/23 10:25:57 by thbierne          #+#    #+#             */
/*   Updated: 2023/01/06 12:51:11 by thbierne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/RobotomyRequestForm.hpp"


/*			constructor			*/

RobotomyRequestForm::RobotomyRequestForm() : Form("RobotomyRequestForm", "default", 72, 45)
{
	std::cout << "\033[0;32mBureaucrat RobotomyRequestForm constructor created\033[0m" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const std::string target) : Form("RobotomyRequestForm", target, 72, 45)
{
	std::cout << "\033[0;32mBureaucrat RobotomyRequestForm constructor created\033[0m" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const std::string name, const std::string target) : Form(name, target, 72, 45)
{
	std::cout << "\033[0;32mBureaucrat ShrubberyCreationForm constructor created\033[0m" << std::endl;
}


/*			copy constructor and assigment			*/

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &p)
{
	std::cout << "\033[0;32mcopy RobotomyRequestForm constructor called\033[0m" << std::endl;
	setSign(p.getSign());
	setToSign(p.getToSign());
	setToExec(p.getToExec());
}

void RobotomyRequestForm::operator=(const RobotomyRequestForm &p)
{
	std::cout << "\033[0;32mCopy RobotomyRequestForm assignment call\033[0m" << std::endl;
	setSign(p.getSign());
	setToSign(p.getToSign());
	setToExec(p.getToExec());
}


/*			destructor			*/

RobotomyRequestForm::~RobotomyRequestForm()
{
	std::cout << "\033[0;31mRobotomyRequestForm Destructor called for \033[0m" << getName() << std::endl;
}


/*			public fonction			*/

void	RobotomyRequestForm::launch()
{
	std::cout << "\033[0;32mMake some drill noises \"bzzzzzz\"!!!\033[0m" << std::endl;
	if (rand() < RAND_MAX / 2)
		std::cout << getTarget() << "\033[0;33 has been successfully robotomized !\033[0m" << std::endl;
	else
		std::cout << "\033[0;31mThe operation for \033[0m" << getTarget() << "\033[0;31m has fail !\033[0m" << std::endl;
}