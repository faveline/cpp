/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faveline <faveline@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 11:18:56 by faveline          #+#    #+#             */
/*   Updated: 2024/03/15 13:57:36 by faveline         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_H
# define BUREAUCRAT_H

# include <iostream>

class Bureaucrat
{
private:
	const std::string	_name;
	int					_grade;
public:
	Bureaucrat();
	Bureaucrat(const std::string name, int grade);
	Bureaucrat(const Bureaucrat &B);
	Bureaucrat			&operator=(const Bureaucrat &rhs);
	~Bureaucrat();

	Bureaucrat			operator++(int);
	Bureaucrat			operator--(int);
	const std::string	getName() const;
	int					getGrade() const;

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

std::ostream			&operator<<(std::ostream &o, const Bureaucrat &rhs);

#endif
