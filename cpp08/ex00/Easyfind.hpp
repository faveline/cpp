/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faveline <faveline@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 15:42:11 by faveline          #+#    #+#             */
/*   Updated: 2024/03/25 13:23:54 by faveline         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_H
# define EASYFIND_H

# include <iostream>
# include <list>
# include <vector>
# include <deque>

template <typename T>
int	easyfind(T const &container, int const toFind)
{
	int	find = 0;
	
	for (typename T::const_iterator i=container.begin(); i != container.end(); ++i)
	{	
		if (*i == toFind)
			return (find);
		find++;
	}
	return (-1);
}

#endif
