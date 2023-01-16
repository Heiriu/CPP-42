/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thbierne <thbierne@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 12:21:40 by thbierne          #+#    #+#             */
/*   Updated: 2023/01/16 12:54:56 by thbierne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Base.hpp"
#include "../include/A.hpp"
#include "../include/B.hpp"
#include "../include/C.hpp"

Base * generate(void)
{
	srand(time(NULL));

	int i = rand();
	i = i % 3;
	if (i == 0)
		return new A();
	else if (i == 1)
		return new B();
	else if (i == 2)
		return new C();
	return (NULL);
}

void identify(Base* p)
{
	if (dynamic_cast<A*>(p))
		std::cout << "Base A" << std::endl;
	else if (dynamic_cast<B*>(p))
		std::cout << "Base B" << std::endl;
	else if (dynamic_cast<C*>(p))
		std::cout << "Base C" << std::endl;
	else
		std::cout << "Fail" << std::endl;
}

void identify(Base& p)
{
	try
	{
		if (dynamic_cast<A*>(&p))
			std::cout << "Base A" << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
		if (dynamic_cast<B*>(&p))
			std::cout << "Base B" << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
		if (dynamic_cast<C*>(&p))
			std::cout << "Base C" << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
}

int	main()
{
	Base *b = generate();

	identify(b);
	identify(*b);
	delete b;
}