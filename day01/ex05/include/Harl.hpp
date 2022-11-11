/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thbierne <thbierne@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 16:12:30 by thbierne          #+#    #+#             */
/*   Updated: 2022/11/11 16:49:02 by thbierne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

class Harl
{
	public:

	Harl();
	~Harl();
	void 	complain(std::string level);

	private:
	
	void	debug(void);
	void	info(void);
	void	warning(void);
	void	error(void);
};