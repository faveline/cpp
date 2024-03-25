/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faveline <faveline@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 17:51:59 by faveline          #+#    #+#             */
/*   Updated: 2024/03/25 18:33:41 by faveline         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

RPN::RPN()
{
	this->_str = NULL;
}

RPN::RPN(char *str)
{
	this->_str = str;
}

RPN::RPN(const RPN &R)
{
	*this = R;
}

RPN	&RPN::operator=(const RPN &rhs)
{
	(void)rhs;
	return (*this);
}

RPN::~RPN() {}

static void	do_calcul(std::stack<int> &stack, char opp)
{
	int	nb1;
	int	nb2;
	int	calcul;

	if (stack.size() <= 1)
	{
		std::cout << "Not enough numbers before: " << opp << std::endl;
		throw (std::exception());
	}
	nb2 = stack.top();
	stack.pop();
	nb1 = stack.top();
	stack.pop();
	if (opp == '+')
		calcul = nb1 + nb2;
	else if (opp == '-')
		calcul = nb1 - nb2;
	else if (opp == '*')
		calcul = nb1 * nb2;
	else if (opp == '/')
		calcul = nb1 / nb2;
	stack.push(calcul);
}

void	RPN::doRPN()
{
	std::stack<int>	stack;

	for (size_t i = 0; this->_str[i]; i++)
	{
		if (isdigit(this->_str[i]))
			stack.push(this->_str[i] - 48);
		else if (this->_str[i] != ' ')
			do_calcul(stack, this->_str[i]);
	}
	if (stack.size() > 1)
		std::cout << "Too many numbers." << std::endl;
	else
		std::cout << "Result is: " << stack.top() << std::endl;
}
