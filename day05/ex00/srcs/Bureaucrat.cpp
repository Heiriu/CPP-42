/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thbierne <thbierne@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 13:12:09 by thbierne          #+#    #+#             */
/*   Updated: 2022/12/21 15:13:39 by thbierne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Bureaucrat.hpp"

Bureaucrat::Bureaucrat(std::string const name, int grade) : _name(name)
{
	std::cout << "\033[0;32mBureaucrat constructor created\033[0m" << std::endl;
	_grade = grade;
}

Bureaucrat::Bureaucrat() : _name("default"), _grade(150) 
{
	std::cout << "\033[0;32mBureaucrat Default constructor created\033[0m" << std::endl;
	setGrade(150);
}

Bureaucrat::~Bureaucrat()
{
	std::cout << "\033[0;31mBureaucrat Destructor called for \033[0m" << getName() << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat &p)
{
	std::cout << "\033[0;32mcopy constructor called\033[0m" << std::endl;
	_grade = p._grade;
}

void	Bureaucrat::operator=(const Bureaucrat &p)
{
	std::cout << "\033[0;32mCopy assignment call\033[0m" << std::endl;
	_grade = p._grade;
}

std::ostream &operator<<(std::ostream &out, const Bureaucrat &fixe)
{
    out << fixe.getName() << ", grade " << fixe.getGrade();
    return (out);
}

void	Bureaucrat::setGrade(int grade)
{
	_grade = grade;
}

int		Bureaucrat::getGrade() const
{
	return (_grade);
}

std::string Bureaucrat::getName() const
{
	return (_name);
}

void	Bureaucrat::incrementGrade()
{
	if (_grade <= 1)
		throw Bureaucrat::GradeTooHighException();
	else if (_grade > 150)
		throw Bureaucrat::GradeTooLowException();
	_grade--;
}

void	Bureaucrat::decrementGrade()
{
	if (_grade >= 150)
		throw Bureaucrat::GradeTooLowException();
	else if (_grade < 1)
		throw Bureaucrat::GradeTooHighException();
	_grade++;
}