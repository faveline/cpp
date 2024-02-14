/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faveline <faveline@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 11:26:01 by faveline          #+#    #+#             */
/*   Updated: 2024/02/14 16:39:36 by faveline         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Cat_H
# define Cat_H

# include "Animal.hpp"
# include "Brain.hpp"

class Cat: public AAnimal, public Brain
{
private:
	Brain			*_BrainCat;
public:
	Cat();
	Cat(const Cat &A);
	Cat				&operator=(const Cat &rhs);
	virtual ~Cat();

	virtual void	makeSound()const;
};

#endif
