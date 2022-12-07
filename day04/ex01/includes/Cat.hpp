/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thbierne <thbierne@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 11:11:00 by thbierne          #+#    #+#             */
/*   Updated: 2022/12/07 13:45:21 by thbierne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{

	public:

		Cat();
		~Cat();
		Cat(const Cat &p);
		void operator=(const Cat &p);

		void makeSound() const;

	private:

		Brain	*_brain;
};

#endif