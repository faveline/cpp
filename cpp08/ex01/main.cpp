/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faveline <faveline@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 15:35:13 by faveline          #+#    #+#             */
/*   Updated: 2024/03/21 18:21:58 by faveline         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int	main(void)
{
	Span test = Span(5);
	Span egale = Span(2);
	Span multi = Span(20000);
	
	test.addNumber(6);
	test.addNumber(3);
	test.addNumber(17);
	test.addNumber(9);
	test.addNumber(11);
	test.printList();
	std::cout << "Longest: " << test.longestSpan() << std::endl;
	std::cout << "Shortest: " << test.shortestSpan() << std::endl;

	// egale.addNumber(60);
	// egale.addNumber(30);
	// egale.addNumber(170);
	// egale.addNumber(90);
	// egale.addNumber(110);
	// egale.printList();
	// egale = test;
	// egale.printList();

	multi.addNumberIter(20000, 0, 700000);
	std::cout << "Longest: " << multi.longestSpan() << std::endl;
	std::cout << "Shortest: " << multi.shortestSpan() << std::endl;
	//multi.printList();

	return (0);
}
