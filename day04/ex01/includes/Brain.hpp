/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thbierne <thbierne@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 14:18:09 by thbierne          #+#    #+#             */
/*   Updated: 2022/12/07 12:09:52 by thbierne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>
#include <string>

class Brain
{

	public:

		Brain();
		~Brain();
		Brain(const Brain &p);
		void	operator=(const Brain &p);

	private:

		std::string _ideas[100];
};

#endif