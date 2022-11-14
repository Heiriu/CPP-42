/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thbierne <thbierne@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 16:14:05 by thbierne          #+#    #+#             */
/*   Updated: 2022/11/14 12:51:21 by thbierne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Harl.hpp"

int	main()
{
	Harl harl;

	harl.complain("debug");
	harl.complain("error");
	harl.complain("info");
	harl.complain("warning");
	harl.complain("warning");
	harl.complain("debug");
	return (0);
}