/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thbierne <thbierne@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 12:43:12 by thbierne          #+#    #+#             */
/*   Updated: 2022/11/18 10:22:23 by thbierne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Fixed.hpp"

int	main()
{
	Fixed a;
	Fixed const b( 10 );
	Fixed const c( 42.42f );
	Fixed const d( b );

	a = Fixed( 42.42f );
	a + b;
	std::cout << "a is " << a << std::endl;
	a - b;
	std::cout << "a is " << a << std::endl;
	a * b;
	std::cout << "a is " << a << std::endl;
	a / b;
	std::cout << "a is " << a << std::endl;
	a++;
	std::cout << "a is " << a << std::endl;
	std::cout << "b is " << b << std::endl;

	
	return (0);
}