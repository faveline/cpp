/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faveline <faveline@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 11:31:58 by faveline          #+#    #+#             */
/*   Updated: 2024/03/20 13:40:47 by faveline         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_H
# define ITER_H

# include <iostream>
# include <stdint.h>

class Iter
{
private:
	Iter();
	Iter(const Iter &I);
	Iter	&operator=(const Iter &rhs);
	~Iter();
public:
	template< typename T >
	static void	iter(T *array, size_t const  length, void (*f)(T&))
	{
		if (!array)
			return ;
		for (size_t i = 0; i < length; i++)
			f(array[i]);
	}
	template< typename T >
	static void	iter(const T *array, size_t const  length, void (*f)(const T&))
	{
		if (!array)
			return ;
		for (size_t i = 0; i < length; i++)
			f(array[i]);
	}
	template< typename T >
	static void	disp(T &x)
	{
		std::cout << x << std::endl;
	}
};

#endif
