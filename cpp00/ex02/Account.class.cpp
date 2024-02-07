/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faveline <faveline@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 16:49:32 by faveline          #+#    #+#             */
/*   Updated: 2024/02/07 13:25:18 by faveline         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <time.h>
#include "Account.hpp"

Account::Account(void)
{
	_accountIndex = 0;
	_amount = 0;
	_nbDeposits = 0;
	_nbWithdrawals = 0;
}

Account::Account(int initial_deposit)
{
	Account::_displayTimestamp();
	std::cout << "index:" << this->_nbAccounts << ";amount:";
	std::cout << initial_deposit << ";created" << std::endl;
	this->_totalAmount += initial_deposit;
	this->_amount = initial_deposit;
	this->_accountIndex = this->_nbAccounts;
	this->_nbAccounts += 1;	
}

Account::~Account(void)
{
	Account::_displayTimestamp();
	std::cout << "index:" << 8 - this->_nbAccounts << ";amount:";
	std::cout << this->_amount << ";closed" << std::endl;
	this->_nbAccounts -= 1;	
}

void	Account::displayAccountsInfos(void)
{	
	Account::_displayTimestamp();
	std::cout << "accounts:" << getNbAccounts();
	std::cout << ";total:" << getTotalAmount();
	std::cout << ";deposits:" << getNbDeposits();
	std::cout << ";withdrawals:" << getNbWithdrawals() << std::endl;
}

void	Account::displayStatus(void) const
{
	this->_displayTimestamp();
	std::cout << "index:" << this->_accountIndex;
	std::cout << ";amount:" << this->_amount;
	std::cout << ";deposits:" << this->_nbDeposits;
	std::cout << ";withdrawals:" << this->_nbWithdrawals << std::endl;
}

void	Account::makeDeposit(int deposit)
{
	this->_displayTimestamp();
	std::cout << "index:" << this->_accountIndex;
	std::cout << ";p_amount:" << this->_amount;
	this->_amount += deposit;
	this->_nbDeposits = 1;
	this->_totalNbDeposits += 1;
	this->_totalAmount += deposit;
	std::cout << ";deposit:" << deposit;
	std::cout << ";amount:" << this->_amount;
	std::cout << ";nb_deposits:" << this->_nbDeposits << std::endl;
}

int	Account::checkAmount(void) const
{
	if (this->_amount < 0)
		return (1);
	return (0);
}

bool	Account::makeWithdrawal(int withdrawal)
{
	this->_displayTimestamp();
	std::cout << "index:" << this->_accountIndex;
	std::cout << ";p_amount:" << this->_amount;
	this->_amount -= withdrawal;
	if (checkAmount())
	{
		this->_amount += withdrawal;
		std::cout << ";withdrawal:refused" << std::endl;
		return (1);
	}
	this->_nbWithdrawals = 1;
	this->_totalNbWithdrawals += 1;
	this->_totalAmount -= withdrawal;
	std::cout << ";withdrawal:" << withdrawal;
	std::cout << ";amount:" << this->_amount;
	std::cout << ";nb_withdrawal:" << this->_nbWithdrawals << std::endl;
	return (0);
}

int	Account::getNbAccounts(void)
{
	return (Account::_nbAccounts);
}

int	Account::getTotalAmount(void)
{
	return (Account::_totalAmount);
}

int	Account::getNbDeposits(void)
{
	return (Account::_totalNbDeposits);
}

int	Account::getNbWithdrawals(void)
{
	return (Account::_totalNbWithdrawals);
}

void	Account::_displayTimestamp(void)
{
	time_t		timer;
	struct tm	*r_time;

	time(&timer);
	r_time = localtime(&timer);
	std::cout << "[" << r_time->tm_year + 1900;
	if (r_time->tm_mon + 1 >= 10)
		std::cout << r_time->tm_mon + 1;
	else
		std::cout << "0" << r_time->tm_mon + 1;
	if (r_time->tm_mday >= 10)
		std::cout << r_time->tm_mday << "_";
	else
		std::cout << "0" << r_time->tm_mday << "_";
	if (r_time->tm_hour >= 10)
		std::cout << r_time->tm_hour;
	else
		std::cout << "0" << r_time->tm_hour;
	if (r_time->tm_min >= 10)
		std::cout << r_time->tm_min;
	else
		std::cout << "0" <<r_time->tm_min;
	if (r_time->tm_sec >= 10)
		std::cout << r_time->tm_sec << "] ";
	else
		std::cout << "0" << r_time->tm_sec << "] ";
}

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;
