/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thbierne <thbierne@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 13:45:55 by thbierne          #+#    #+#             */
/*   Updated: 2023/01/06 13:25:17 by thbierne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
#include <string>
#include <fstream>

class Bureaucrat;

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
		void signForm(Bureaucrat const &worker);
		virtual void launch() = 0;
		void  execute(Bureaucrat const &executor);

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

		class FormNotSign : public std::exception
		{

			public:

				const char* what() const throw();
		};

		class GradeTooLowTooSign : public std::exception
		{
			
			public:

				const char* what() const throw();
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