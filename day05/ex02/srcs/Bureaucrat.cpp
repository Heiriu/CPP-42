/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thbierne <thbierne@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 13:12:09 by thbierne          #+#    #+#             */
/*   Updated: 2023/01/06 13:20:56 by thbierne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Bureaucrat.hpp"
#include "../includes/Form.hpp"

/* 			Constructor  			*/

Bureaucrat::Bureaucrat() : _name("default"), _grade(150) 
{
	std::cout << "\033[0;32mBureaucrat Default constructor created\033[0m" << std::endl;
}


Bureaucrat::Bureaucrat(std::string const name, int grade) : _name(name)
{
	std::cout << "\033[0;32mBureaucrat constructor created\033[0m" << std::endl;
	if (grade > 150)
		throw Bureaucrat::GradeTooHighException();
	else if (grade < 1)
		throw Bureaucrat::GradeTooLowException();
	_grade = grade;
}


/*			copy constructor and assignment			*/

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



/*			destructor			*/

Bureaucrat::~Bureaucrat()
{
	std::cout << "\033[0;31mBureaucrat Destructor called for \033[0m" << getName() << std::endl;
}



/*			display			*/

std::ostream &operator<<(std::ostream &out, const Bureaucrat &fixe)
{
    out << fixe.getName() << ", grade " << fixe.getGrade();
    return (out);
}


/*			setter			*/

void	Bureaucrat::setGrade(int grade)
{
	_grade = grade;
}


/*			getter			*/

int		Bureaucrat::getGrade() const
{
	return (_grade);
}

std::string Bureaucrat::getName() const
{
	return (_name);
}


/*		public fonctions		*/

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

void	Bureaucrat::executeForm(Form& form) const
{
	if (_grade <= form.getToExec())
	{
		std::cout << getName() << "\033[0;33m can execute the form \033[0m" << form.getName() << std::endl;
		form.beSigned(*this);
	}
	else
		std::cout << getName() << "\032[0;31m can't execute the form \033[0m" << form.getName() << std::endl;
}


/*			exception handle		*/

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("Grade too high\n");
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("Grade too low\n");
}