/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faveline <faveline@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 18:34:18 by faveline          #+#    #+#             */
/*   Updated: 2024/03/15 19:17:23 by faveline         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(): _target("John Doe"), _sign(72), _exec(45) {}

RobotomyRequestForm::RobotomyRequestForm(const std::string target): _target(target), _sign(72), _exec(45) {}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &P): _target(P._target) {}

RobotomyRequestForm	&RobotomyRequestForm::operator=(const RobotomyRequestForm &rhs)
{
	return (*this);
}

RobotomyRequestForm::~RobotomyRequestForm() {}

void	RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
	if (executor.getGrade() > this->_exec)
		throw(Bureaucrat::GradeTooLowException());
	else
	{
		std::cout << "Bzzzzzzzzzzzzzzzzzzzzzzzzz" << std::endl;
		if (rand() % 2)
			std::cout << this->_target << " has been robotomized successfully." << std::endl;
		else
			std::cout << "The robotomy failed on " << this->_target << std::endl;	
	}
}