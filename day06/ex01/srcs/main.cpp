/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thbierne <thbierne@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 10:33:27 by thbierne          #+#    #+#             */
/*   Updated: 2023/01/16 11:59:54 by thbierne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Data.hpp"

int main()
{
	Data input;

	input.i = 42;
	input.str = "test serialisation";

	std::cout << &input << std::endl;
	std::cout << input.i << std::endl << input.str << std::endl << std::endl;

	uintptr_t output_uintptr = serialize(&input);

	std::cout << output_uintptr << std::endl << std::endl;

	Data* output = deserialize(output_uintptr);

	std::cout << &output << std::endl;
	std::cout << output->i << std::endl << output->str << std::endl;
}