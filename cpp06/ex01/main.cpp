/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faveline <faveline@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 15:13:27 by faveline          #+#    #+#             */
/*   Updated: 2024/03/19 16:04:10 by faveline         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

int	main(void)
{
	Data		test;
	Data		*result;
	uintptr_t	step;

	test.data1 = 1;
	test.data2 = 'c';
	step = Serializer::serialize(&test);	
	result = Serializer::deserialize(step);
	std::cout << &test << std::endl;
	std::cout << std::hex << step << std::dec << std::endl;
	std::cout << result << std::endl;
	std::cout << result->data1 << std::endl;
	std::cout << result->data2 << std::endl;
	return (0);
}
