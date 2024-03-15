/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faveline <faveline@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 15:52:15 by faveline          #+#    #+#             */
/*   Updated: 2024/03/15 18:03:26 by faveline         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_H
# define FORM_H

# include "Bureaucrat.hpp"

class Bureaucrat;

class AForm
{
private:
	const std::string	_name;
	bool				_signed;
	const int			_gradeToSigned;
	const int			_gradeToExec;
public:
	AForm();
	AForm(const std::string name, const int gradeS, const int gradeE);
	AForm(const AForm &F);
	AForm				&operator=(const AForm &rhs);
	~AForm();

	const std::string	getName() const;
	bool				getSigned() const;
	int					getGradeS() const;
	int					getGradeE() const;

	void				beSigned(const Bureaucrat &B);
	void				execute(Bureaucrat const & executor) const = 0;

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

std::ostream			&operator<<(std::ostream &o, const AForm &rhs);

#endif
