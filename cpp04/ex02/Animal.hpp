/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faveline <faveline@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 11:06:16 by faveline          #+#    #+#             */
/*   Updated: 2024/02/15 12:33:49 by faveline         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_H
# define ANIMAL_H

# include <iostream>

class AAnimal
{
protected:
	std::string	_type;
public:
	AAnimal();
	AAnimal(std::string	type);
	AAnimal(const AAnimal &A);
	AAnimal			&operator=(const AAnimal &rhs);
	virtual ~AAnimal();

	std::string		getType()const;
	virtual void	makeSound()const = 0;
};

#endif
