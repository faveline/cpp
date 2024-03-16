/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faveline <faveline@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/16 16:12:20 by faveline          #+#    #+#             */
/*   Updated: 2024/03/16 17:00:16 by faveline         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

Intern::Intern() {}

Intern::Intern(const Intern &I)
{
	(void)I;
}

Intern	&Intern::operator=(const Intern &rhs)
{
	(void)rhs;
	return (*this);
}

Intern::~Intern() {}

static AForm	*creatRobotForm(const std::string target)
{
	AForm	*form = new RobotomyRequestForm(target);
	std::cout << "Intern creates RobotomyRequestForm." << std::endl;
	return (form);
}

static AForm	*creatPresidentForm(const std::string target)
{
	AForm	*form = new PresidentialPardonForm(target);
	std::cout << "Intern creates PresidentialPardonForm." << std::endl;
	return (form);
}

static AForm	*creatTreesForm(const std::string target)
{
	AForm	*form = new ShrubberyCreationForm(target);
	std::cout << "Intern creates ShrubberyCreationForm." << std::endl;
	return (form);
}

static AForm	*noForm(const std::string target)
{
	(void)target;
	throw (Intern::FormNotFound());
	return (NULL);
}

const std::string	Intern::FormNotFound::errorNotF() const
{
	return ("Form not found");
}

AForm	*Intern::makeForm(const std::string name, const std::string target)
{
	AForm				*(*f[])(const std::string target) = {&creatRobotForm, &creatPresidentForm, &creatTreesForm, &noForm};
	const std::string	formAccepted[3] = {"robotomy request", "presidential pardon", "shrubbery creation"};
	int					i = 0;

	while (i < 3 && formAccepted[i] != name)
		i++;
	return (f[i](target));
}
