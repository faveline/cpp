/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faveline <faveline@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 15:52:15 by faveline          #+#    #+#             */
/*   Updated: 2024/03/15 19:24:07 by faveline         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_H
# define FORM_H

# include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
private:
	const std::string	_name;
	bool				_signed;
	const int			_gradeToSigned;
	const int			_gradeToExec;
public:
	Form();
	Form(const std::string name, const int gradeS, const int gradeE);
	Form(const Form &F);
	Form				&operator=(const Form &rhs);
	~Form();

	const std::string	getName() const;
	bool				getSigned() const;
	int					getGradeS() const;
	int					getGradeE() const;

	void				beSigned(const Bureaucrat &B);

	class	GradeTooHighException: public std::exception
	{
	public:
		const std::string	errorHigh() const;
	};
	class	GradeTooLowException: public std::exception
	{
	public:
		const std::string	errorLow() const;
	};
};

std::ostream			&operator<<(std::ostream &o, const Form &rhs);

#endif
