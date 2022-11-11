/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Replace.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thbierne <thbierne@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 10:14:29 by thbierne          #+#    #+#             */
/*   Updated: 2022/11/11 15:07:41 by thbierne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <fstream>

class Replace
{
	public:

		Replace();
		Replace(char *name, char *s1, char *s2);
		~Replace();

		std::string	getNameFile();
		std::string	getS1();
		std::string	getS2();
		void		getNameReplace();
		void		replaceFile();
		int			openFile();

	private:
	
		const	char*	_namefile;
		char*			_replacefile;
		std::string		_s1;
		std::string		_s2;
};
