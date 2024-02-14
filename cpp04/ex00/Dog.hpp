/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faveline <faveline@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 11:19:12 by faveline          #+#    #+#             */
/*   Updated: 2024/02/14 13:49:40 by faveline         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_H
# define DOG_H

# include "Animal.hpp"

class Dog: public Animal
{
public:
	Dog();
	Dog(const Dog &A);
	Dog				&operator=(const Dog &rhs);
	~Dog();

	virtual void	makeSound()const;
};

#endif
