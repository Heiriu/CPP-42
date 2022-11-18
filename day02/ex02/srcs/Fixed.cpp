/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thbierne <thbierne@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 11:03:33 by thbierne          #+#    #+#             */
/*   Updated: 2022/11/18 10:32:59 by thbierne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Fixed.hpp"

//		contructeur		//

Fixed::Fixed()
{
	std::cout << "\033[0;32mDefault constructor called\033[0m" << std::endl;
	_nbr = 0;
}

Fixed::Fixed(const int nbr)
{
	std::cout << "\033[0;32mInt constructor called\033[0m" << std::endl;
	this->_nbr = nbr << this->_bits;
}

Fixed::Fixed(const float nbr)
{
	std::cout << "\033[0;32mFloat constructor called\033[0m" << std::endl;
	this->_nbr = (int)(roundf(nbr * (1 << this->_bits)));
}




//		destructeur		//

Fixed::~Fixed()
{
	std::cout << "\033[0;31mdestructor called\033[0m" << std::endl;
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

std::ostream &operator<<(std::ostream &out, const Fixed &fixe)
{
    out << fixe.toFloat();
    return (out);
}

void	Fixed::operator+(const Fixed &p)
{
	std::cout << "\033[0;33maddition assignment call\033[0m" << std::endl;
	_nbr += p.getRawBits();
}

void	Fixed::operator-(const Fixed &p)
{
	std::cout << "\033[0;33msoustraction assignment call\033[0m" << std::endl;
	_nbr -= p.getRawBits();
}

void	Fixed::operator*(const Fixed &p)
{
	std::cout << "\033[0;33mmultiplication assignment call\033[0m" << std::endl;
	_nbr *= p.toInt();
}

void	Fixed::operator/(const Fixed &p)
{
	std::cout << "\033[0;33mdivision assignment call\033[0m" << std::endl;
	_nbr /= p.toInt();
}

void	Fixed::operator++()
{
	std::cout << "\033[0;33mincrementation assignment call\033[0m" << std::endl;
	_nbr = ((int)_nbr / (int)(1 << this->_bits));
}

void	Fixed::operator++(int)
{
	std::cout << "\033[0;33mincrementation assignment call\033[0m" << std::endl;
	_nbr = ((int)_nbr / (int)(1 << this->_bits));
}



//		Setter		//

void Fixed::setRawBits(int const raw)
{
	_nbr = raw;
}



//		Getter		//

int	Fixed::getRawBits( void ) const
{
	//std::cout << "\033[0;33mFonction getRawBits called\033[0m" << std::endl;
	return (this->_nbr);
}



//		Converion	//

float Fixed::toFloat(void) const
{
    return ((float)this->_nbr / (float)(1 << this->_bits));
}

int Fixed::toInt(void) const
{
    return ((int)this->_nbr / (int)(1 << this->_bits));
}