/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faveline <faveline@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 16:37:20 by faveline          #+#    #+#             */
/*   Updated: 2024/03/19 17:24:25 by faveline         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BASE_H
# define BASE_H

# include <iostream>
# include <cstdlib>
# include <stdint.h>

class Base
{
public:
	virtual ~Base();

	static Base	*generate(void);
	static void	identify(Base *p);
	static void	identify(Base &p);
};

#endif
