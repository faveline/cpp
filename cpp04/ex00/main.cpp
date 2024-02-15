/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faveline <faveline@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 11:30:48 by faveline          #+#    #+#             */
/*   Updated: 2024/02/15 13:29:47 by faveline         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int	main(void)
{
	const	Animal* meta = new (std::nothrow) Animal();
	if (!meta)
		return (1);
	const	Animal* j = new (std::nothrow) Dog();
	if (!j)
		return (delete meta, 1);
	const	Animal* i = new (std::nothrow) Cat();
	if (!i)
		return (delete meta, delete j, 1);

	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound();
	j->makeSound();
	meta->makeSound();

	delete (i);
	delete (j);
	delete (meta);

	const	WrongAnimal* test = new WrongAnimal();
	if (!test)
		return (1);
	const	WrongAnimal* k = new WrongCat();
	if (!k)
		return (delete test, 1);

	std::cout << k->getType() << " " << std::endl;
	k->makeSound();
	test->makeSound();

	delete (k);
	delete (test);
	return (0);
}
