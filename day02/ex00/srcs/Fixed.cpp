/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thbierne <thbierne@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 11:03:33 by thbierne          #+#    #+#             */
/*   Updated: 2022/11/16 16:07:08 by thbierne         ###   ########.fr       */
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
	_nbr = p.getRawBits();
}

// 		Surcharge de l'opérateur d'affectation		//

void Fixed::operator=(const Fixed &p)
{
	std::cout << "\033[0;33mCopy assignment call\033[0m" << std::endl;
	_nbr = p.getRawBits();
}

void Fixed::setRawBits(int const raw)
{
	_nbr = raw;
}

int	Fixed::getRawBits( void ) const
{
	std::cout << "\033[0;33mFonction getRawBits called\033[0m" << std::endl;
	return (this->_nbr);
}