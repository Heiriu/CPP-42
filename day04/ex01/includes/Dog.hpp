/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thbierne <thbierne@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 11:31:13 by thbierne          #+#    #+#             */
/*   Updated: 2022/12/07 13:42:17 by thbierne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{

	public:

		Dog();
		~Dog();
		Dog(const Dog &p);
		void operator=(const Dog &p);
		
		void makeSound() const;

	private:

		Brain	*_brain;

};

#endif