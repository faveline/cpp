/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faveline <faveline@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 11:30:48 by faveline          #+#    #+#             */
/*   Updated: 2024/02/15 13:42:14 by faveline         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int	main(void)
{
	const Animal	*A[10];
	Dog				*Oddi;
	WrongCat		*Garfield;
	try
	{
		for (int i = 0; i < 5; i++)
			A[i] = new Dog;
		for (int i = 5; i < 10; i++)
			A[i] = new Cat;

		Oddi = new Dog;
		Garfield = new WrongCat;
	}
	catch(const std::bad_alloc& e)
	{
		std::cerr << e.what() << '\n';
		for (int i = 0; i < 10; i++)
			delete A[i];
		delete (Oddi);
		delete (Garfield);
		return (1);
	}

	Dog			OddiCopy(*Oddi);
	WrongCat	*GarfieldCopy(Garfield);

	Oddi->displayIdea();
	OddiCopy.displayIdea();
	Oddi->modifyIdea("Idea = water");
	Oddi->displayIdea();
	OddiCopy.displayIdea();

	Garfield->displayIdea();
	GarfieldCopy->displayIdea();
	Garfield->modifyIdea("Idea = water");
	Garfield->displayIdea();
	GarfieldCopy->displayIdea();

	for (int i = 0; i < 10; i++)
		delete A[i];
	delete (Oddi);
	delete (Garfield);
	return (0);
}
