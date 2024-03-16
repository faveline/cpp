/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faveline <faveline@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 11:18:58 by faveline          #+#    #+#             */
/*   Updated: 2024/03/16 15:19:28 by faveline         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(): _name("John Doe")
{
	this->_grade = 150;
}

Bureaucrat::Bureaucrat(const std::string name, int grade): _name(name)
{
	if (grade > 150)
		throw (Bureaucrat::GradeTooLowException());
	else if (grade < 1)
		throw (Bureaucrat::GradeTooHighException());
	else
		this->_grade = grade;
}

Bureaucrat::Bureaucrat(const Bureaucrat &B): _name(B.getName())
{
	*this = B;
}

Bureaucrat	&Bureaucrat::operator=(const Bureaucrat &rhs)
{
	this->_grade = rhs._grade;
	return (*this);
}

Bureaucrat::~Bureaucrat() {}

Bureaucrat	Bureaucrat::operator++(int)
{
	if (this->_grade - 1 < 1)
		throw (Bureaucrat::GradeTooHighException());
	else
		this->_grade--;
	return (*this);
}

Bureaucrat	Bureaucrat::operator--(int)
{
	if (this->_grade + 1 > 150)
		throw (Bureaucrat::GradeTooLowException());
	else
		this->_grade++;
	return (*this);
}

const std::string	Bureaucrat::getName() const
{
	return (this->_name);
}

int	Bureaucrat::getGrade() const
{
	return (this->_grade);
}

void	Bureaucrat::signForm(AForm &F)
{
	if (this->_grade <= F.getGradeS() && !F.getSigned())
	{
		F.beSigned(*this);
		std::cout << this->getName() << " signed " << F.getName() << "." << std::endl;
	}
	else if (this->_grade > F.getGradeS())
		std::cout << this->getName() << " couldn't sign " << F.getName() << " because " \
			<< "their grade is too low." << std::endl;
	else
		std::cout << this->getName() << " couldn't sign " << F.getName() << " because " \
			<< "the Form is already signed." << std::endl;
}

void	Bureaucrat::executeForm(AForm const & form)
{
	try
	{
		form.execute(*this);
	}
	catch(const AForm::GradeTooLowException& e)
	{
		std::cerr << this->getName() << " couldn't execute " << form.getName() \
			<< " because: " << e.errorLow() << std::endl;
	}
	catch(const AForm::FormNotSigned& e)
	{
		std::cerr << this->getName() << " couldn't execute " << form.getName() \
			<< " because: " << e.errorNotS() << std::endl;
	}
}

std::string const	Bureaucrat::GradeTooHighException::errorHigh() const
{
	return ("The grade is too high, grades must be included between 1 and 150.");
}

std::string const	Bureaucrat::GradeTooLowException::errorLow() const
{
	return ("The grade is too low, grades must be included between 1 and 150.");
}

std::ostream	&operator<<(std::ostream &o, const Bureaucrat &rhs)
{
	o << rhs.getName() << ", bureaucrat grade " << rhs.getGrade() << "." << std::endl;
	return (o);
}
