/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faveline <faveline@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/26 10:52:43 by faveline          #+#    #+#             */
/*   Updated: 2024/03/26 18:23:22 by faveline         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "PmergeMe.hpp"

PmergeMe::PmergeMe() {}

PmergeMe::PmergeMe(const PmergeMe &P)
{
	*this = P;
}

PmergeMe	&PmergeMe::operator=(const PmergeMe &rhs)
{
	(void)rhs;
	return (*this);
}

PmergeMe::~PmergeMe() {}

void	PmergeMe::alloc_container(int argc, int *tab)
{
	struct timeval	tv;
	int				t0;
	int				ti;

	std::cout << "Time to allocate a range of " << argc - 1 << " elements with:\n";
	
	gettimeofday(&tv, NULL);
	t0 = (useconds_t)tv.tv_usec;
	for (int i = 0; i < argc - 1; i++)
		this->_vector.push_back(tab[i]);
	gettimeofday(&tv, NULL);
	ti = (useconds_t)tv.tv_usec;
	std::cout << "Vector: " << ti - t0 << " us." << std::endl;

	gettimeofday(&tv, NULL);
	t0 = (useconds_t)tv.tv_usec;
	for (int i = 0; i < argc - 1; i++)
		this->_deque.push_back(tab[i]);
	gettimeofday(&tv, NULL);
	ti = (useconds_t)tv.tv_usec;
	std::cout << "Deque: " << ti - t0 << " us." << std::endl;
}

void	PmergeMe::print_deque(int flag)
{
	if (flag == 1)
		std::cout << "Elements before the sorting algorihm: ";
	else if (flag == 2)
		std::cout << "Elements after the sorting algorihm: ";
	if (this->_deque.size() <= 8)
	{
		for (std::deque<int>::iterator i = this->_deque.begin(); i != this->_deque.end() ; i++)
			std::cout << *i << " ";
	}
	else
	{
		std::deque<int>::iterator i = this->_deque.begin();
		for (size_t j = 0; j < 6; j++)
			std::cout << *(i++) << " ";
		std::cout << "[...] " << this->_deque.back();
	}
	std::cout << std::endl;
}

void	PmergeMe::sort_tab()
{
	struct timeval	tv;
	int				t0;
	int				ti;

	std::cout << "Time to sort the elements with:\n";
	
	gettimeofday(&tv, NULL);
	t0 = (useconds_t)tv.tv_usec + tv.tv_sec * 1000000;
	this->MergeSort(this->_vector, 0, this->_vector.size() - 1);
	gettimeofday(&tv, NULL);
	ti = (useconds_t)tv.tv_usec + tv.tv_sec * 1000000;
	std::cout << "Vector: " << ti - t0 << " us." << std::endl;

	gettimeofday(&tv, NULL);
	t0 = (useconds_t)tv.tv_usec + tv.tv_sec * 1000000;
	this->MergeSort(this->_deque, 0, this->_deque.size() - 1);
	gettimeofday(&tv, NULL);
	ti = (useconds_t)tv.tv_usec + tv.tv_sec * 1000000;
	std::cout << "Deque: " << ti - t0 << " us." << std::endl;
}
