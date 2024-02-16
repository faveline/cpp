/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faveline <faveline@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 13:59:47 by faveline          #+#    #+#             */
/*   Updated: 2024/02/16 18:43:28 by faveline         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"
#include "Cure.hpp"
#include "Character.hpp"
#include "MateriaSource.hpp"

int main()
{
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());

	ICharacter* me = new Character("me");

	AMateria* tmp;

	tmp = NULL;
	me->equip(tmp);
	tmp = src->createMateria("ice");
	me->equip(tmp);
	me->unequip(3);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	for (int i = 0; i < 110; i++)
	{
		tmp = src->createMateria("cure");
		me->equip(tmp);
		me->unequip(2);
	}
	me->unequip(8742);

	ICharacter* bob = new Character("bob");

	me->use(0, *bob);
	me->use(1, *me);
	me->use(2, *bob);
	me->use(5, *bob);
	bob->use(0, *bob);

	std::cout << std::endl;

	Character *him = new Character("him");
	tmp = src->createMateria("cure");
	him->equip(tmp);
	him->use(0, *bob);

	Character them;
	Character her(*him);
	her.use(0, *bob);
	her = them;
	her.use(0, *bob);
	her = *him;
	delete him;
	her.use(0, *bob);
	
	delete me;
	delete bob;
	delete src;

	return 0;
}
