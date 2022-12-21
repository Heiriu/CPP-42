/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thbierne <thbierne@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 13:11:20 by thbierne          #+#    #+#             */
/*   Updated: 2022/12/21 13:43:53 by thbierne         ###   ########.fr       */
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
	
	std::string	const	_name;
	int					_grade;

};

std::ostream &operator<<(std::ostream &out, const Bureaucrat &fixe);

#endif