/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faveline <faveline@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 11:19:12 by faveline          #+#    #+#             */
/*   Updated: 2024/02/14 15:48:50 by faveline         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_H
# define DOG_H

# include "Animal.hpp"
# include "Brain.hpp"

class Dog: public Animal, public Brain
{
private:
	Brain			*_BrainDog;
public:
	Dog();
	Dog(const Dog &A);
	Dog				&operator=(const Dog &rhs);
	~Dog();

	virtual void	makeSound()const;
};

#endif
