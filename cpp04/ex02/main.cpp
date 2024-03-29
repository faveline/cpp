/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faveline <faveline@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 11:30:48 by faveline          #+#    #+#             */
/*   Updated: 2024/02/15 13:45:20 by faveline         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int	main(void)
{
	//const	AAnimal* meta = new AAnimal();
	const	Dog* j = new Dog();
	const	Cat* i = new Cat();
	if (!i || !j)
		return (delete i, delete j, 1);

	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound();
	j->makeSound();

	delete (i);
	delete (j);
	return (0);
}
