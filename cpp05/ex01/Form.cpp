/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faveline <faveline@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 15:51:55 by faveline          #+#    #+#             */
/*   Updated: 2024/03/15 19:24:15 by faveline         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(): _name("Empty"), _gradeToSigned(50), _gradeToExec(100)
{
	this->_signed = 0;
}

Form::Form(const std::string name, const int gradeS, const int gradeE): \
	_name(name), _gradeToSigned(gradeS), _gradeToExec(gradeE)
{
	if (gradeS > 150 || gradeE > 150)
		throw (Form::GradeTooLowException());
	else if (gradeS < 1 || gradeE < 1)
		throw (Form::GradeTooHighException());
	this->_signed = 0;
}

Form::Form(const Form &F): \
	_name(F.getName()), _gradeToSigned(F.getGradeS()), _gradeToExec(F.getGradeE())
{
	*this = F;
}

Form	&Form::operator=(const Form &rhs)
{
	this->_signed = rhs.getSigned();
	return (*this);
}

Form::~Form() {}

const std::string	Form::getName() const
{
	return(this->_name);
}

bool	Form::getSigned() const
{
	return (this->_signed);
}

int	Form::getGradeS() const
{
	return (this->_gradeToSigned);
}

int	Form::getGradeE() const
{
	return (this->_gradeToExec);
}

void	Form::beSigned(const Bureaucrat &B)
{
	if (B.getGrade() <= this->_gradeToSigned)
		this->_signed = 1;
	else
		throw (Form::GradeTooLowException());
}

const std::string	Form::GradeTooHighException::errorHigh() const
{
	return ("The grade is too high.");
}

const std::string	Form::GradeTooLowException::errorLow() const
{
	return ("The grade is too low.");
}

std::ostream	&operator<<(std::ostream &o, const Form &rhs)
{
	o << "Form name: " << rhs.getName() << "." << std::endl;
	if (rhs.getSigned())
		o << "Form is signed." << std::endl;
	else
		o << "Form not signed yet." << std::endl;
	o << "Grade " << rhs.getGradeS() << " required to signed the Form." << std::endl;
	o << "Grade " << rhs.getGradeE() << " required to execute the Form." << std::endl;
	return (o);
}
