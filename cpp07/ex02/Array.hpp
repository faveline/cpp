/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   _array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faveline <faveline@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 12:10:26 by faveline          #+#    #+#             */
/*   Updated: 2024/03/20 14:27:30 by faveline         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_H
# define ARRAY_H

# include <iostream>
# include <cstdlib>

template<typename T>
class Array
{
private:
	const unsigned int	_size;
	T					*_array;
public:
	Array<T>(): _size(0)
	{
		this->_array = NULL;
	}
	Array<T>(unsigned int n): _size(n)
	{
		this->_array = new T[n]();	
	}
	Array<T>(const Array<T> &A): _size(A.size())
	{
		this->_array = new  T[A.size()];
		for (size_t i = 0; i < A.size(); i++)
			this->_array[i] = A[i];
	}
	Array<T>	&operator=(const Array<T> &rhs)
	{
		size_t	min;

		if (this->size() < rhs.size())
			min = this->size();
		else
			min = rhs.size();
		for (size_t i = 0; i < min; i++)
			this->_array[i] = rhs[i];
		return (*this);
	}
	~Array<T>()
	{
		if (_array)
			delete [] _array;
	}

	T	&operator[](unsigned int i)
	{
		if (i >= this->size())
			throw (std::exception());
		return (this->_array[i]);
	}
	T	&operator[](unsigned int i) const
	{
		if (i >= this->size())
			throw (std::exception());
		return (this->_array[i]);
	}
	unsigned int	size(void) const
	{
		return (this->_size);
	}
};

#endif
