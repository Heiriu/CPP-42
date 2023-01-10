/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thbierne <thbierne@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/05 10:12:35 by thbierne          #+#    #+#             */
/*   Updated: 2023/01/10 14:01:49 by thbierne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERT_HPP
#define	CONVERT_HPP

#include <iostream>
#include <string>
#include <cstdlib>

class Convert
{

	public:

		Convert();
		Convert(std::string str);
		~Convert();
		Convert(const Convert &p);
		void operator=(const Convert &p);

		char	convertChar(std::string *type) const;
		int		convertInt(std::string *type) const;
		float	convertFloat(std::string *type) const;
		double	convertDouble(std::string *type) const;

	private:
	
	std::string	_str;
	std::string	_type;
	char	_toChar;
	int		_toInt;
	float	_toFloat;
	double	_toDouble;

	class EmptyArg : public std::exception
	{
		public:
		
			const char* what() const throw();
	};

	class InvalidInput : public std::exception
	{
		public:
		
			const char* what() const throw();
	};

	class NotPrintableChar : public std::exception
	{
		public:
	
			const char* what() const throw();
	};

	class Impossible : public std::exception
	{
		public:
	
			const char* what() const throw();
	};
};

std::ostream &operator<<(std::ostream &out, const Convert &form);

#endif