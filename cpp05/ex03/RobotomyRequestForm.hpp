/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faveline <faveline@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 18:31:35 by faveline          #+#    #+#             */
/*   Updated: 2024/03/16 14:45:14 by faveline         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_H
# define ROBOTOMYREQUESTFORM_H

# include "Form.hpp"
# include <cstdlib>

class RobotomyRequestForm: public AForm
{
private:
	const std::string	_target;
public:
	RobotomyRequestForm();
	RobotomyRequestForm(const std::string target);
	RobotomyRequestForm(const RobotomyRequestForm &R);
	RobotomyRequestForm	&operator=(const RobotomyRequestForm &rhs);
	~RobotomyRequestForm();

	void				exec(void) const;
};

#endif
