/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thbierne <thbierne@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 10:43:37 by thbierne          #+#    #+#             */
/*   Updated: 2022/12/05 10:53:13 by thbierne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include <string>

class Animal
{

	public:

		Animal();
		~Animal();

		virtual void makeSound() const;

		void 		setType(std::string type);
		std::string	getType() const;

	protected:

		std::string _type;
};

#endif