/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Replace.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thbierne <thbierne@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 10:16:19 by thbierne          #+#    #+#             */
/*   Updated: 2022/11/14 13:29:31 by thbierne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Replace.hpp"


			// 			constructeur 			//


Replace::Replace()
{
}

Replace::Replace(char *name, char *s1, char *s2) : _namefile(name), _s1(s1), _s2(s2)
{
	std::ifstream fichier(_namefile, std::ios::in);

    if(fichier)
        fichier.close();
    else
    	std::cerr << "Cannot open the file" << std::endl;
}


			// 			destructeur 			//


Replace::~Replace()
{
}


			// 			Fonction 			//


int		Replace::openFile()
{
	std::ifstream fichier(_namefile, std::ios::in);

    if(fichier)
        fichier.close();
    else
	{
    	std::cerr << "Cannot open the file" << std::endl;
		return (-1);
	}
	return (0);
}

void	Replace::getNameReplace()
{
	std::string str = ".replace";
	std::string str2 = _namefile;
	unsigned int sz = str2.size();
	sz += 8;
	_replacefile = new char[sz];
	str2.resize(sz);
	str2.insert((sz - 8), str);
	str2.copy(_replacefile, sz, 0);
}

void	Replace::replaceFile()
{
	std::ifstream fichier(_namefile, std::ios::in);
	std::ofstream out(_replacefile, std::ios::out);
	std::string contenu;
	std::size_t found = 0;
	std::size_t lenghts1 = _s1.length();

	while (getline(fichier, contenu))
	{
		found = contenu.find(_s1, found);
		while (found!=std::string::npos)
		{
			contenu.erase(found, lenghts1);
			contenu.insert(found, _s2);
			found = contenu.find(_s1);
		}
		out << contenu << std::endl;
	}
    fichier.close();
}


// Getter //


std::string	Replace::getNameFile()
{
	return (_namefile);
}

std::string	Replace::getS1()
{
	return (_s1);
}

std::string	Replace::getS2()
{
	return (_s2);
}