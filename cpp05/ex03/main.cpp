/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faveline <faveline@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 14:12:25 by faveline          #+#    #+#             */
/*   Updated: 2024/03/18 13:28:49 by faveline         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Intern.hpp"

int	main(void)
{
	try
	{
		Intern	intern;
		AForm	*testR;

		testR = intern.makeForm("robotomy request", "Bender");
		Bureaucrat	bureau = Bureaucrat("Mickey", 1);
		std::cout << bureau << *testR;
		bureau.signForm(*testR);
		bureau.executeForm(*testR);
		delete (testR);
	}
	catch(const std::bad_alloc &e)
	{
		std::cerr << e.what() << std::endl;
	}
	catch(const Intern::FormNotFound &e)
	{
		std::cerr << e.errorNotF() << std::endl;
	}
	catch(const Bureaucrat::GradeTooHighException& e)
	{
		std::cerr << e.errorHigh() << '\n';
	}
	catch(const Bureaucrat::GradeTooLowException& e)
	{
		std::cerr << e.errorLow() << '\n';
	}

	std::cout << std::endl;
	std::cout << std::endl;

	try
	{
		Intern	intern;
		AForm	*testR;

		testR = intern.makeForm("presidential pardon", "Bender");
		Bureaucrat	bureau = Bureaucrat("Mickey", 1);
		std::cout << bureau << *testR;
		bureau.signForm(*testR);
		bureau.executeForm(*testR);
		delete (testR);
	}
	catch(const std::bad_alloc &e)
	{
		std::cerr << e.what() << std::endl;
	}
	catch(const Intern::FormNotFound &e)
	{
		std::cerr << e.errorNotF() << std::endl;
	}
	catch(const Bureaucrat::GradeTooHighException& e)
	{
		std::cerr << e.errorHigh() << '\n';
	}
	catch(const Bureaucrat::GradeTooLowException& e)
	{
		std::cerr << e.errorLow() << '\n';
	}
	
	std::cout << std::endl;
	std::cout << std::endl;

	try
	{
		Intern	intern;
		AForm	*testR;

		testR = intern.makeForm("presidential pardon ", "Bender");
		Bureaucrat	bureau = Bureaucrat("Mickey", 1);
		std::cout << bureau << *testR;
		bureau.signForm(*testR);
		bureau.executeForm(*testR);
		delete (testR);
	}
	catch(const std::bad_alloc &e)
	{
		std::cerr << e.what() << std::endl;
	}
	catch(const Intern::FormNotFound &e)
	{
		std::cerr << e.errorNotF() << std::endl;
	}
	catch(const Bureaucrat::GradeTooHighException& e)
	{
		std::cerr << e.errorHigh() << '\n';
	}
	catch(const Bureaucrat::GradeTooLowException& e)
	{
		std::cerr << e.errorLow() << '\n';
	}
	return (0);
}
