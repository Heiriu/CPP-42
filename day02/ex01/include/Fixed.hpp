/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thbierne <thbierne@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 11:03:22 by thbierne          #+#    #+#             */
/*   Updated: 2022/11/17 14:49:48 by thbierne         ###   ########.fr       */
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

		float toFloat(void) const;
		float toInt(void) const;
		

	private:

		int					_nbr;
		const static int 	_bits = 8;
};

std::ostream &operator<<(std::ostream &out, const Fixed &fixe);