/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faveline <faveline@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 16:38:48 by faveline          #+#    #+#             */
/*   Updated: 2024/03/19 17:54:47 by faveline         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base::~Base() {}

Base	*Base::generate(void)
{
	int		randi;

	srand (time(NULL));
	randi = rand() % 3;
	if (randi == 0)
		return (new (std::nothrow) A);
	else if (randi == 1)
		return (new (std::nothrow) B);
	else
		return (new (std::nothrow) C);
}

void	Base::identify(Base *p)
{	
	if (!p)
		return ;
	std::cout << "Pointeur: ";
	if (dynamic_cast<A*>(p))
		std::cout << "Random class is A." << std::endl;
	else if (dynamic_cast<B*>(p))
		std::cout << "Random class is B." << std::endl;
	else if (dynamic_cast<C*>(p))
		std::cout << "Random class is C." << std::endl;
}

void	Base::identify(Base &p)
{
	try
	{
		(void)&dynamic_cast<A&>(p);
		std::cout << "Reference: Random class is A." << std::endl;
	}
	catch(const std::exception &e)
	{
		try
		{
			(void)&dynamic_cast<B&>(p);
			std::cout << "Reference: Random class is B." << std::endl;
		}
		catch(const std::exception &e)
		{
			try
			{
				(void)&dynamic_cast<C&>(p);
				std::cout << "Reference: Random class is C." << std::endl;
			}
			catch(const std::exception &e) {}
		}
	}
}