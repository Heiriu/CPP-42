/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thbierne <thbierne@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/06 09:58:57 by thbierne          #+#    #+#             */
/*   Updated: 2023/01/06 13:11:52 by thbierne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
#define INTERN_HPP

#include <iostream>
#include <string>

class Form;

class Intern
{

	public:
	
		Intern();
		~Intern();
		Intern(const Intern &p);
		void operator=(const Intern &p);

		Form*	makeForm(std::string name, std::string target);

		class CannotCreatForm : public std::exception
		{
			public :
			
				const char* what() const throw();
		};

	private:

};

#endif