/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thbierne <thbierne@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 13:45:55 by thbierne          #+#    #+#             */
/*   Updated: 2023/01/06 13:22:43 by thbierne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
#include <string>
#include "Bureaucrat.hpp"

class Form
{

	public:

		Form();
		Form(std::string name, int toSign, int toExec);
		~Form();
		Form(const Form &p);
		void	operator=(const Form &p);

		std::string	getName() const;
		bool getSign() const;
		int	getToSign() const;
		int	getToExec() const;

		void beSigned(Bureaucrat const &worker);
		void signForm(Bureaucrat const &worker);

		class GradeTooHighException : public std::exception
		{
			
			public:
		
				const char* what() const throw();
		};

		class GradeTooLowException : public std::exception
		{
		
			public:
		
				const char* what() const throw();
		};

	private:
	
		std::string const 	_name;
		bool 				_sign;
		int					_toSign;
		int					_toExec;
};

std::ostream &operator<<(std::ostream &out, const Form &form);

#endif