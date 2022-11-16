/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thbierne <thbierne@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 08:37:04 by thbierne          #+#    #+#             */
/*   Updated: 2022/11/15 11:19:13 by thbierne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>

//fonction public


Account::Account(int initial_deposit)	//constructeur
{
	_nbAccounts = 0;
	_totalAmount = 0;
	_totalNbDeposits = 0;
	_totalNbWithdrawals = 0;

	_accountIndex = _nbAccounts;
	_amount = initial_deposit;
	_nbDeposits = 0;
	_nbWithdrawals = 0;
	_nbAccounts++;
	_totalAmount += initial_deposit;

	std::cout << "index:" << _accountIndex << ";amount:" << _amount;
	std::cout << ";created" << std::endl;
}

Account::~Account(void)					//destructeur
{
	std::cout << "index:" << _accountIndex << ";amount:" << _amount;
	std::cout << ";closed" << std::endl;
}



int		Account::getNbAccounts(void)
{
	return (_nbAccounts + 1);
}

int		Account::getTotalAmount(void)
{
	return (_totalAmount);
}

int		Account::getNbDeposits(void)
{
	return (_totalNbDeposits);
}

int		Account::getNbWithdrawals(void)
{
	return (_totalNbWithdrawals);
}



void	Account::displayAccountsInfos(void)
{
	std::cout << "account:" << getNbAccounts() << ";total:" << getTotalAmount();
	std::cout << ";deposit:" << getNbDeposits() << ";withdrawals:" << getNbWithdrawals();
	std::cout << std::endl; 
}

void	Account::makeDeposit(int deposit)
{
	std::cout << "index:" << _accountIndex << ";p_amount:" << _amount;
	std::cout << ";deposit:" << deposit;
	_amount += deposit;
	_nbDeposits++;
	std::cout << ";amount:" << _amount << ";nb+deposit:" << _nbDeposits;
	std::cout << std::endl;
}

bool	Account::makeWithdrawal(int withdrawal)
{

}

int		Account::checkAmount(void) const
{

}

void	Account::displayStatus( void ) const
{
	std::cout << "index:" << _accountIndex << ";amount:" << _amount;
	std::cout << ";deposit" << _nbDeposits << ";withdrawals:" << _nbWithdrawals;
	std::cout << std::endl;
}

//		partie prive

void	Account::_displayTimestamp( void )
{

}

Account::Account(void)
{
	
}