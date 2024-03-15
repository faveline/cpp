/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faveline <faveline@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 14:12:25 by faveline          #+#    #+#             */
/*   Updated: 2024/03/15 19:23:30 by faveline         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

int	main(void)
{
	try
	{
		Bureaucrat testB = Bureaucrat("Fabio", 10);
		std::cout << testB;
		Form testF = Form("file1", 50, 100);
		std::cout << testF;	
		testF.beSigned(testB);
		std::cout << testF;
		
		std::cout << std::endl;
		Form testF2 = Form("file2", 5, 100);
		std::cout << testF2;	
		testF2.beSigned(testB);
		std::cout << testF2;
	}
	catch(const Bureaucrat::GradeTooHighException& e)
	{
		std::cerr << e.errorHigh() << '\n';
	}
	catch(const Bureaucrat::GradeTooLowException& e)
	{
		std::cerr << e.errorLow() << '\n';
	}
	catch(const Form::GradeTooHighException& e)
	{
		std::cerr << e.errorHigh() << '\n';
	}
	catch(const Form::GradeTooLowException& e)
	{
		std::cerr << e.errorLow() << '\n';
	}

	std::cout << std::endl;
	std::cout << std::endl;
	
	try
	{
		Bureaucrat testB = Bureaucrat("Chris", 10);
		std::cout << testB;
		Form testF = Form("file1", 50, 100);
		std::cout << testF;	
		testB.signForm(testF);
		std::cout << testF;
		testB.signForm(testF);
	
		Bureaucrat testB2 = Bureaucrat("Florian", 125);
		std::cout << testB2;
		testB2.signForm(testF);
		
	}
	catch(const Bureaucrat::GradeTooHighException& e)
	{
		std::cerr << e.errorHigh() << '\n';
	}
	catch(const Bureaucrat::GradeTooLowException& e)
	{
		std::cerr << e.errorLow() << '\n';
	}
	catch(const Form::GradeTooHighException& e)
	{
		std::cerr << e.errorHigh() << '\n';
	}
	catch(const Form::GradeTooLowException& e)
	{
		std::cerr << e.errorLow() << '\n';
	}

	return (0);
}
