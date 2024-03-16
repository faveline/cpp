/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faveline <faveline@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 14:12:25 by faveline          #+#    #+#             */
/*   Updated: 2024/03/16 16:52:10 by faveline         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int	main(void)
{
	AForm *testF = NULL;
	AForm *testF1 = NULL;
	AForm *testF2 = NULL;

	testF = new (std::nothrow) RobotomyRequestForm();
	testF1 = new (std::nothrow) PresidentialPardonForm();
	testF2 = new (std::nothrow) ShrubberyCreationForm("threetrees");
	if (!testF || !testF1 || !testF2)
	{
		delete(testF);
		delete(testF1);
		delete(testF2);
	}
	try
	{
		Bureaucrat testB = Bureaucrat("Pikachu", 40);
		std::cout << testB;
		std::cout << *testF << std::endl;

		testB.executeForm(*testF);
		testB.signForm(*testF);
		testB.signForm(*testF);
		testB.executeForm(*testF);

		std::cout << std::endl << *testF1;
		testB.signForm(*testF1);
		testB.executeForm(*testF1);

		std::cout << std::endl;
		Bureaucrat testB1 = Bureaucrat("Barbapapa", 1);
		std::cout << testB1;
		testB1.signForm(*testF1);
		testB.executeForm(*testF1);
		testB1.executeForm(*testF1);	
		
		std::cout << std::endl << *testF2;
		testB1.signForm(*testF2);
		testB1.executeForm(*testF2);
	}
	catch(const Bureaucrat::GradeTooHighException& e)
	{
		std::cerr << e.errorHigh() << std::endl;
	}
	catch(const Bureaucrat::GradeTooLowException& e)
	{
		std::cerr << e.errorLow() << std::endl;
	}
	catch(const AForm::GradeTooHighException& e)
	{
		std::cerr << e.errorHigh() << std::endl;
	}
	catch(const AForm::GradeTooLowException& e)
	{
		std::cerr << e.errorLow() << std::endl;
	}
	catch(const AForm::FormNotSigned& e)
	{
		std::cerr << e.errorNotS() << std::endl;
	}
	delete(testF);
	delete(testF1);
	delete(testF2);
	return (0);
}
