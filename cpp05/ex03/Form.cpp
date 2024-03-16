/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faveline <faveline@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 15:51:55 by faveline          #+#    #+#             */
/*   Updated: 2024/03/15 17:45:29 by faveline         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

AForm::AForm(): _name("Empty"), _gradeToSigned(50), _gradeToExec(100)
{
	this->_signed = 0;
}

AForm::AForm(const std::string name, const int gradeS, const int gradeE): \
	_name(name), _gradeToSigned(gradeS), _gradeToExec(gradeE)
{
	if (gradeS > 150 || gradeE > 150)
		throw (AForm::GradeTooLowException());
	else if (gradeS < 1 || gradeE < 1)
		throw (AForm::GradeTooHighException());
	this->_signed = 0;
}

AForm::AForm(const AForm &F): \
	_name(F.getName()), _gradeToSigned(F.getGradeS()), _gradeToExec(F.getGradeE())
{
	*this = F;
}

AForm	&AForm::operator=(const AForm &rhs)
{
	this->_signed = rhs.getSigned();
	return (*this);
}

AForm::~AForm() {}

const std::string	AForm::getName() const
{
	return(this->_name);
}

bool	AForm::getSigned() const
{
	return (this->_signed);
}

int	AForm::getGradeS() const
{
	return (this->_gradeToSigned);
}

int	AForm::getGradeE() const
{
	return (this->_gradeToExec);
}

void	AForm::beSigned(const Bureaucrat &B)
{
	if (B.getGrade() <= this->_gradeToSigned)
		this->_signed = 1;
	else
		throw (AForm::GradeTooLowException());
}

void	AForm::execute(Bureaucrat const & executor) const
{
	if (!this->getSigned())
		throw (AForm::FormNotSigned());
	else if (this->getGradeE() < executor.getGrade())
		throw (AForm::GradeTooLowException());
	else
	{
		std::cout << executor.getName() << " executed " << this->getName() << "." << std::endl;
		this->exec();
	}
}

const std::string	AForm::GradeTooHighException::errorHigh() const
{
	return ("The grade is too high.");
}

const std::string	AForm::GradeTooLowException::errorLow() const
{
	return ("The grade is too low.");
}

const std::string	AForm::FormNotSigned::errorNotS() const
{
	return ("The form has to be signed before execution.");
}

std::ostream	&operator<<(std::ostream &o, const AForm &rhs)
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
