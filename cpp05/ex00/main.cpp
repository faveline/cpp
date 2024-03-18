/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faveline <faveline@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 11:19:00 by faveline          #+#    #+#             */
/*   Updated: 2024/03/18 13:17:33 by faveline         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int	main(void)
{
	try
	{
		Bureaucrat test = Bureaucrat("David", 1);

		test--;
		std::cout << test;
		test++;
		std::cout << test;
	}
	catch(const Bureaucrat::GradeTooHighException & e)
	{
		std::cerr << e.errorHigh() << '\n';
	}
	catch(const Bureaucrat::GradeTooLowException & e)
	{
		std::cerr << e.errorLow() << '\n';
	}

	std::cout << std::endl;

	try
	{
		Bureaucrat test = Bureaucrat("Pierre", 200);
		std::cout << test;
	}
	catch(const Bureaucrat::GradeTooHighException & e)
	{
		std::cerr << e.errorHigh() << '\n';
	}
	catch(const Bureaucrat::GradeTooLowException & e)
	{
		std::cerr << e.errorLow() << '\n';	
	}

	std::cout << std::endl;

	try
	{
		Bureaucrat test = Bureaucrat("Tom", 1);
		std::cout << test;
		test++;
		std::cout << test;
	}
	catch(const Bureaucrat::GradeTooHighException & e)
	{
		std::cerr << e.errorHigh() << '\n';
	}
	catch(const Bureaucrat::GradeTooLowException & e)
	{
		std::cerr << e.errorLow() << '\n';
	}
	return (0);
}
