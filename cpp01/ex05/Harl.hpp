/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faveline <faveline@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 16:18:33 by faveline          #+#    #+#             */
/*   Updated: 2024/02/09 11:08:43 by faveline         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_H
# define HARL_H

# include <iostream>

class Harl
{
private:
	void	_debug(void);
	void	_info(void);
	void	_warning(void);
	void	_error(void);
	void	_null(void);
public:
	Harl(void);
	~Harl(void);
	void	complain(std::string level);
};

#endif
