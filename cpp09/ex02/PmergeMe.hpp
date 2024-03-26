/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faveline <faveline@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/26 10:52:46 by faveline          #+#    #+#             */
/*   Updated: 2024/03/26 17:50:18 by faveline         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_H
# define PMERGEME_H

# include <iostream>
# include <string.h>
# include <stdlib.h>
# include <sys/time.h>
# include <deque>
# include <vector>
# include <algorithm>

class PmergeMe
{
private:
	std::vector<int>	_vector;
	std::deque<int>		_deque;
public:
	PmergeMe();
	PmergeMe(const PmergeMe &P);
	PmergeMe &operator=(const PmergeMe &rhs);
	~PmergeMe();

	void	alloc_container(int argc, int *tab);
	void	sort_tab();
	void	print_deque(int flag);
	template <typename T>
	void	MergeSort(T &arr, int l, int r)
	{
		if (l >= r)
			return ;
	    int m = l + (r - l) / 2;

		MergeSort(arr, l, m);
		MergeSort(arr, m + 1, r);

		int	p = l;
		int	q = m;
		int n1 = q - p + 1;
		int n2 = r - q;

		int L[n1], M[n2];

		for (int i = 0; i < n1; i++)
			L[i] = arr[p + i];
		for (int j = 0; j < n2; j++)
			M[j] = arr[q + 1 + j];

		int i, j, k;
		i = 0;
		j = 0;
		k = p;

		while (i < n1 && j < n2)
		{
			if (L[i] <= M[j])
			{
				arr[k] = L[i];
				i++;
			}
			else 
			{
				arr[k] = M[j];
				j++;
			}
			k++;
		}

		while (i < n1)
		{
			arr[k] = L[i];
			i++;
			k++;
		}
		while (j < n2)
		{
			arr[k] = M[j];
			j++;
			k++;
		}
	}
};

#endif
