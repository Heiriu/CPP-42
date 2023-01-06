/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thbierne <thbierne@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 13:47:04 by thbierne          #+#    #+#             */
/*   Updated: 2023/01/06 13:19:19 by thbierne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Form.hpp"
#include "../includes/Bureaucrat.hpp"

/* 			Constructor  			*/

Form::Form() : _name("default"), _target("default"), _sign(0), _toSign(150), _toExec(150)
{
	std::cout << "\033[0;32mForm constructor created\033[0m" << std::endl;
}

Form::Form(std::string const name, std::string const target, int toSign, int toExec) : _name(name), _target(target), _sign(0), _toSign(toSign), _toExec(toExec)
{
	std::cout << "\033[0;32mForm constructor created\033[0m" << std::endl;
	if (_toSign > 150)
		throw Form::GradeTooLowException();
	else if (_toSign < 1)
		throw Form::GradeTooHighException();
	if (_toExec > 150)
		throw Form::GradeTooLowException();
	else if (_toExec < 1)
		throw Form::GradeTooHighException();
}


/* 			Copy constructor and assignment			*/

Form::Form(const Form &p)
{
	std::cout << "\033[0;32mcopy constructor called\033[0m" << std::endl;
	_sign = p._sign;
	_toSign = p._toSign;
	_toExec = p._toExec;
}

void	Form::operator=(const Form &p)
{
	std::cout << "\033[0;32mCopy assignment call\033[0m" << std::endl;
	_sign = p._sign;
	_toSign = p._toSign;
	_toExec = p._toExec;
}


/* 				Destructor 				*/

Form::~Form()
{
	std::cout << "\033[0;31mForm Destructor called for \033[0m" << getName() << std::endl;
}



/*				Display					*/

std::ostream &operator<<(std::ostream &out, const Form &form)
{
    out << "\033[0;33mname : \033[0m" << form.getName() << std::endl;
	out << "\033[0;33mtarget : \033[0m" << form.getTarget() << std::endl;
	out << "\033[0;33msign : \033[0m" << form.getSign() << std::endl;
	out << "\033[0;33mto sign : \033[0m" << form.getToSign() << std::endl;
	out << "\033[0;33mto execute : \033[0m" << form.getToExec() << std::endl;
    return (out);
}



/*				Getter					*/

std::string	Form::getName() const
{
	return (_name);
}

std::string	Form::getTarget() const
{
	return (_target);
}

bool Form::getSign() const
{
	return (_sign);
}

int	Form::getToSign() const
{
	return (_toSign);
}

int	Form::getToExec() const
{
	return (_toExec);
}



/*			setter			*/

void	Form::setSign(int sign)
{
	_sign = sign;
}

void	Form::setToSign(int toSign)
{
	_toSign = toSign;
}

void	Form::setToExec(int toExec)
{
	_toExec = toExec;
}



/*				public fonction			*/

void	Form::beSigned(Bureaucrat const &worker)
{
	if (_toSign < 1 || _toExec < 1)
		throw Form::GradeTooLowException();
	else if (_toSign > 150 || _toExec > 150)
		throw Form::GradeTooHighException();
	if (worker.getGrade() > _toSign)
	{
		throw Form::GradeTooLowException();
	}
	signForm(worker);
}

void	Form::signForm(Bureaucrat const &worker)
{
	if (_sign == 1)
		std::cout << worker.getName() << "\033[0;31m couldn't sign \033[0m" << getName() << "\033[0;31m because he is already sign\033[0m" << std::endl;
	else
	{
		_sign = 1;
		std::cout << worker.getName() << "\033[0;33m signed \033[0m" << getName() << std::endl;
	}
	if (_toExec >= worker.getGrade())
		std::cout << worker.getName() << "\033[0;33m can execute the form \033[0m" << getName() << std::endl;
	else
		std::cout << worker.getName() << "\033[0;31m couldn't execute form \033[0m" << getName() << "\033[0;31m because grade is too low\033[0m" << std::endl;
}

void	Form::launch()
{
	
}

void 	Form::execute(Bureaucrat const & executor)
{
	if (getToExec() >= executor.getGrade())
	{
		if (getSign() == 1)
			launch();
		else
			throw Form::FormNotSign();
	}
	else
		throw Form::GradeTooLowTooSign();
}


/*			exception handle		*/

const char* Form::GradeTooHighException::what() const throw()
{
	return ("Grade too high\n");
}

const char* Form::GradeTooLowException::what() const throw()
{
	return ("Grade too low\n");
}

const char* Form::FormNotSign::what() const throw()
{
	return ("Grade too high\n");
}

const char* Form::GradeTooLowTooSign::what() const throw()
{
	return ("Grade too low\n");
}