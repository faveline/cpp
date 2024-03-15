/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faveline <faveline@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 18:35:08 by faveline          #+#    #+#             */
/*   Updated: 2024/03/15 19:19:44 by faveline         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(): _target("home"), _sign(145), _exec(137) {}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string target): _target(target), _sign(145), _exec(137) {}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &P): _target(P._target) {}

ShrubberyCreationForm	&ShrubberyCreationForm::operator=(const ShrubberyCreationForm &rhs)
{
	return (*this);
}

ShrubberyCreationForm::~ShrubberyCreationForm() {}

void	ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
	if (executor.getGrade() > this->_exec)
		throw (Bureaucrat::GradeTooLowException());
	else
	{
		

	}
}
