/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thbierne <thbierne@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 11:03:33 by thbierne          #+#    #+#             */
/*   Updated: 2022/11/16 13:11:19 by thbierne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Fixed.hpp"

//		contructeur		//

Fixed::Fixed()
{
	_nbr = 0;
	std::cout << "\033[0;32mDefault constructor called\033[0m" << std::endl;
}

//		destructeur		//

Fixed::~Fixed()
{
	std::cout << "\033[0;31mDefault destructor called\033[0m" << std::endl;
}

//		Constructeur de recopie		//

Fixed::Fixed(const Fixed &p)
{
	std::cout << "\033[0;32mcopy constructor called\033[0m" << std::endl;
	_nbr = p._nbr;
}

// 		Surcharge de l'opérateur d'affectation		//

void Fixed::operator=(const Fixed &p)
{
	std::cout << "\033[0;33mCopy assignment call\033[0m" << std::endl;
	_nbr = p._nbr;
}