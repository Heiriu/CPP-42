/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thbierne <thbierne@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 13:11:20 by thbierne          #+#    #+#             */
/*   Updated: 2023/01/06 13:23:04 by thbierne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <string>

class Bureaucrat
{

	public:
	
		Bureaucrat();
		Bureaucrat(std::string name, int grade);

		~Bureaucrat();
		
		Bureaucrat(const Bureaucrat &p);
		void operator=(const Bureaucrat &p);

		void		setGrade(int grade);

		int			getGrade() const;
		std::string	getName() const;
	

		void	incrementGrade();
		void	decrementGrade();

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
	
	std::string	const	_name;
	int					_grade;

};

std::ostream &operator<<(std::ostream &out, const Bureaucrat &fixe);

#endif