/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thbierne <thbierne@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 13:45:55 by thbierne          #+#    #+#             */
/*   Updated: 2022/12/23 15:59:09 by thbierne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
#include <string>

class Form
{

	public:

		Form();
		Form(std::string const name, std::string const target, int toSign, int toExec);
		~Form();
		Form(const Form &p);
		void	operator=(const Form &p);

		std::string	getName() const;
		std::string	getTarget() const;
		bool getSign() const;
		int	getToSign() const;
		int	getToExec() const;

		void setSign(int sign);
		void setToSign(int toSign);
		void setToExec(int toExec);

		void beSigned(Bureaucrat const &worker);
		virtual void launch() = 0;
		void  execute(Bureaucrat const &executor);

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

		class FormNotSign : public std::exception
		{

			public:

				const char* what() const throw()
				{
					return ("Form not sign\n");
				}
		};

		class GradeTooLowTooSign : public std::exception
		{
			
			public:

				const char* what() const throw()
				{
					return ("Too low to execute the form\n");
				}
		};

	private:
	
		std::string const 	_name;
		std::string const 	_target;
		bool 				_sign;
		int					_toSign;
		int					_toExec;
};

std::ostream &operator<<(std::ostream &out, const Form &form);

#endif