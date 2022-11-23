/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thbierne <thbierne@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 11:03:22 by thbierne          #+#    #+#             */
/*   Updated: 2022/11/23 15:24:37 by thbierne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cmath>

class Fixed
{
	
	public:

		Fixed( void );
		~Fixed();
		Fixed(const int nbr);
		Fixed(const float nbr);
		Fixed(const Fixed &p);
		
		int getRawBits( void ) const;
		void setRawBits( int const raw );

		void operator=(const Fixed &p);

		Fixed &operator+(const Fixed &p);
		Fixed &operator-(const Fixed &p);
		Fixed &operator*(const Fixed &p);
		Fixed &operator/(const Fixed &p);

		int operator>(const Fixed &p) const;
		int	operator<(const Fixed &p) const;
		int	operator<=(const Fixed &p) const;
		int	operator>=(const Fixed &p) const;
		int	operator==(const Fixed &p) const;
		int	operator!=(const Fixed &p) const;
		
		Fixed	&operator++();
		Fixed	operator++(int);
		Fixed	&operator--();
		Fixed	operator--(int);

		float toFloat(void) const;
		int toInt(void) const;

		static Fixed &min(Fixed &f1, Fixed &f2);
		const static Fixed &min(Fixed const &f1, Fixed const &f2);
		static Fixed &max(Fixed &f1, Fixed &f2);
		const static Fixed &max(Fixed const &f1, Fixed const &f2);
		

	private:

		int					_nbr;
		const static int 	_bits = 8;
};

std::ostream &operator<<(std::ostream &out, const Fixed &fixe);