/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faveline <faveline@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 11:26:01 by faveline          #+#    #+#             */
/*   Updated: 2024/02/14 15:25:20 by faveline         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Cat_H
# define Cat_H

# include "Animal.hpp"
# include "Brain.hpp"

class Cat: public Animal, public Brain
{
private:
	Brain			*_BrainCat;
public:
	Cat();
	Cat(const Cat &A);
	Cat				&operator=(const Cat &rhs);
	~Cat();

	virtual void	makeSound()const;
};

#endif
