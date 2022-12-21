/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thbierne <thbierne@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 13:45:55 by thbierne          #+#    #+#             */
/*   Updated: 2022/12/21 15:25:47 by thbierne         ###   ########.fr       */
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

		class GradeTooHighException : public std::exception
		{
			
			public:
		
				const char* what() const throw()
				{
					return ("Grade too high\n");
				}
		};

		class GradeTooLowException : public std::exception
		{
		
			public:
		
				const char* what() const throw()
				{
					return ("Grade too low\n");
				}
		};

	private:
	
		std::string const 	_name;
		bool 				_sign;
		int					_toSign;
		int					_toExec;
};

std::ostream &operator<<(std::ostream &out, const Form &form);

#endif