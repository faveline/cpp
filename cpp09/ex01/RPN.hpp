/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faveline <faveline@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 17:50:54 by faveline          #+#    #+#             */
/*   Updated: 2024/03/25 18:31:05 by faveline         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPN_H
# define RPN_H

# include <iostream>
# include <stack>
# include <stdlib.h>

class RPN
{
private:
	char	*_str;
public:
	RPN();
	RPN(char *str);
	RPN(const RPN &R);
	RPN	&operator=(const RPN &rhs);
	~RPN();

	void	doRPN();
};

#endif
