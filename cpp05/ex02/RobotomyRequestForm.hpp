/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faveline <faveline@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 18:31:35 by faveline          #+#    #+#             */
/*   Updated: 2024/03/15 19:11:27 by faveline         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_H
# define ROBOTOMYREQUESTFORM_H

# include "Form.hpp"
# include <cstdlib>

class AForm;

class RobotomyRequestForm
{
private:
	const std::string	_target;
	const int			_sign;
	const int			_exec;
public:
	RobotomyRequestForm();
	RobotomyRequestForm(const std::string target);
	RobotomyRequestForm(const RobotomyRequestForm &R);
	RobotomyRequestForm	&operator=(const RobotomyRequestForm &rhs);
	~RobotomyRequestForm();

	void				execute(Bureaucrat const & executor) const;
};

#endif
