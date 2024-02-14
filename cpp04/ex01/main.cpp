/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faveline <faveline@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 11:30:48 by faveline          #+#    #+#             */
/*   Updated: 2024/02/14 16:05:57 by faveline         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int	main(void)
{
	const Animal	*A[10];
	for (int i = 0; i < 5; i++)
		A[i] = new Dog;
	for (int i = 5; i < 10; i++)
		A[i] = new Cat;

	Dog		*Oddi = new Dog;
	Dog		OddiCopy(*Oddi);
	WrongCat	*Garfield = new WrongCat;
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
