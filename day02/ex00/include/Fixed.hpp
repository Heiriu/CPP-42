/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thbierne <thbierne@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 11:03:22 by thbierne          #+#    #+#             */
/*   Updated: 2022/11/16 12:49:50 by thbierne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

class Fixed
{
	
	public:

		Fixed();
		~Fixed();
		Fixed(const Fixed &p);
		int getRawBits( void ) const;
		void setRawBits( int const raw );
		void operator=(const Fixed &p);

	private:

		int					_nbr;
		const static int 	_bits;
};
