/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thbierne <thbierne@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 11:07:46 by thbierne          #+#    #+#             */
/*   Updated: 2022/12/05 11:08:24 by thbierne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>
#include <string>

class WrongAnimal
{

	public:

		WrongAnimal();
		~WrongAnimal();

		void makeSound() const;

		void 		setType(std::string type);
		std::string	getType() const;

	protected:

		std::string _type;
};

#endif