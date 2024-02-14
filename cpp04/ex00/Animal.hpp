/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faveline <faveline@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 11:06:16 by faveline          #+#    #+#             */
/*   Updated: 2024/02/14 11:09:08 by faveline         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_H
# define ANIMAL_H

# include <iostream>

class Animal
{
protected:
	std::string	_type;
public:
	Animal();
	Animal(std::string	type);
	Animal(const Animal &A);
	Animal			&operator=(const Animal &rhs);
	virtual ~Animal();

	std::string		getType()const;
	virtual void	makeSound()const;
};

#endif
