/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faveline <faveline@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 15:35:23 by faveline          #+#    #+#             */
/*   Updated: 2024/03/21 18:17:44 by faveline         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(): _Nmax(0)
{
	this->_N = 0;
}

Span::Span(unsigned int N): _Nmax(N)
{
	this->_N = 0;
}

Span::Span(const Span &S): _Nmax(S._Nmax)
{
	std::list<int>	list = S._mylist;

	this->_N = 0;
	for (std::list<int>::iterator i = list.begin(); i != list.end(); ++i)
		this->addNumber(*i);
}

Span	&Span::operator=(const Span &rhs)
{
	this->_mylist.erase(this->_mylist.begin(), this->_mylist.end());
	this->_N = 0;
	if (this->_Nmax > rhs._Nmax || rhs._N < this->_Nmax)
	{	
		for (std::list<int>::const_iterator i = rhs._mylist.begin(); i != rhs._mylist.end(); ++i)
			this->addNumber(*i);
	}
	else
	{
		for (std::list<int>::const_iterator i = rhs._mylist.begin(); i != rhs._mylist.end(); ++i)
		{
			if (this->_N < this->_Nmax)
				this->addNumber(*i);
		}
	}
	return (*this);
}

Span::~Span() {}

void	Span::addNumber(int toAdd)
{
	if (this->_N < this->_Nmax)
	{
		this->_mylist.push_back(toAdd);
		this->_N++;
	}
	else
		std::cout << "The list is already full." << std::endl;
}

void	Span::addNumberMulti(int nbr, int Rmin, int Rmax)
{
	if (Rmax <= Rmin)
	{
		std::cout << "Wrong range of iterators." << std::endl;
		return ;
	}
	if (nbr > (int)(this->_Nmax - this->_N))
		nbr = (int)(this->_Nmax - this->_N);
	for (int i = 0; i < nbr; i++)
		this->addNumber(Rmin + (double)(Rmax - Rmin) / nbr * i);
}

void	Span::addNumberIter(int nbr, int Rmin, int Rmax)
{
	if (Rmax <= Rmin)
	{
		std::cout << "Wrong range of iterators." << std::endl;
		return ;
	}
	if (nbr > (int)(this->_Nmax - this->_N))
		nbr = (int)(this->_Nmax - this->_N);
	
	std::list<int>	list;

	for (int i = 0; i < nbr; i++)
		list.push_back(Rmin + (double)(Rmax - Rmin) / nbr * i);
	this->_mylist.insert(this->_mylist.end(), list.begin(), list.end());
}

static int	abs(int	x)
{
	if (x < 0)
		return (-x);
	return (x);
}

int	Span::shortestSpan(void)
{
	std::list<int>	list;
	int				min;

	min = 2147483647;
	list = this->_mylist;	
	for (std::list<int>::iterator i = list.begin(); i != list.end(); ++i)
	{
		for (std::list<int>::iterator j = i; j != list.end(); ++j)
		{
			if (i != j && abs(*i - *j) < min)
				min = abs(*i - *j);
		}
	}
	return (min);
}

int	Span::longestSpan(void)
{
	std::list<int>	list;
	int				min;
	int				max;

	list = this->_mylist;
	min = list.front();
	max = list.front();	
	for (std::list<int>::iterator i = list.begin(); i != list.end(); ++i)
	{
		if (min > *i)
			min = *i;
		if (max < *i)
			max = *i;
	}
	return (abs(max - min));
}

void	Span::printList(void) const
{	
	std::list<int>	list;
	
	list = this->_mylist;
	for (std::list<int>::iterator i = list.begin(); i != list.end(); ++i)
		std::cout << *i << std::endl;
}

void	Span::printList(void)
{	
	std::list<int>	list;
	
	list = this->_mylist;
	for (std::list<int>::iterator i = list.begin(); i != list.end(); ++i)
		std::cout << *i << std::endl;
}
