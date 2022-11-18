/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thbierne <thbierne@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 11:03:22 by thbierne          #+#    #+#             */
/*   Updated: 2022/11/18 10:33:11 by thbierne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cmath>

class Fixed
{
	
	public:

		Fixed();
		~Fixed();
		Fixed(const int nbr);
		Fixed(const float nbr);
		Fixed(const Fixed &p);
		
		int getRawBits( void ) const;
		void setRawBits( int const raw );

		void operator=(const Fixed &p);
		void operator+(const Fixed &p);
		void operator-(const Fixed &p);
		void operator*(const Fixed &p);
		void operator/(const Fixed &p);
		void operator++();
		void operator++(int);

		float toFloat(void) const;
		int toInt(void) const;
		

	private:

		int					_nbr;
		const static int 	_bits = 8;
};

std::ostream &operator<<(std::ostream &out, const Fixed &fixe);