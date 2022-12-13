/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thbierne <thbierne@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 10:36:26 by thbierne          #+#    #+#             */
/*   Updated: 2022/12/13 09:27:56 by thbierne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Animal.hpp"
#include "../includes/WrongAnimal.hpp"
#include "../includes/Dog.hpp"
#include "../includes/Cat.hpp"
#include "../includes/WrongCat.hpp"

int	main()
{
	AAnimal* animal[10];
	int i;

	i = 0;
	while (i < 5)
	{
		animal[i] = new Dog();
		std::cout << std::endl;
		i++;
	}
	while (i < 10)
	{
		animal[i] = new Cat();
		std::cout << std::endl;
		i++;
	}

	i = 0;
	while (i < 10)
	{
		animal[i]->makeSound();
		delete animal[i];
		std::cout << std::endl;
		i++;
	}
	return (0);
}